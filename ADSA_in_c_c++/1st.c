#include<stdio.h>
#include<stdlib.h>
#define SIZE 10 // numbers of buckets
int i;
struct node {
    int key;
    struct node* next;
};

void initialize(struct node* table[]) {
    for (i = 0; i < SIZE; i++) {
        table[i] = NULL;
    }
}
int hash(int key ) {
    return key % SIZE;
}
void insert(struct node* table[], int key) {
    int index = hash(key);
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->key = key;
    new_node->next = table[index];
    table[index] = new_node;
    printf("Inserted key %d at index %d\n", key, index);
}
int search(struct node* table[], int key) {
    int index = hash(key);
    struct node* current = table[index];
    while (current != NULL) {
        if (current->key == key) {
            return 1; // Key found
        }
        current = current->next;
    }
    return 0; // Key not found
}
void delete(struct node* table[], int key) {
    int index = hash(key);
    struct node* current = table[index];
    struct node* prev = NULL;

    while (current != NULL && current->key != key) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Key %d not found for deletion.\n", key);
        return;
    }

    if (prev == NULL) {
        table[index] = current->next; // Deleting the first node
    } else {
        prev->next = current->next; // Bypass the current node
    }
    free(current);
    printf("Deleted key %d from index %d\n", key, index);
}
void display(struct node* table[]) {
    for (i = 0; i < SIZE; i++) {
        struct node* current = table[i];
        printf("Bucket %d: ", i);
        while (current != NULL) {
            printf("%d -> ", current->key);
            current = current->next;
        }
        printf("NULL\n");
    }
}
// int main() {
//     struct node* hash_table[SIZE];
//     initialize(hash_table);

//     insert(hash_table, 10);
//     insert(hash_table, 20);
//     insert(hash_table, 15);
//     insert(hash_table, 25);
//     insert(hash_table, 30);

//     display(hash_table);

//     int key_to_search = 15;
//     if (search(hash_table, key_to_search)) {
//         printf("Key %d found in the hash table.\n", key_to_search);
//     } else {
//         printf("Key %d not found in the hash table.\n", key_to_search);
//     }

//     return 0;
// }
// This code implements a basic hash table using chaining for collision resolution in C.

int main(){
    struct node* hash_table[SIZE];
    initialize(hash_table);
    int choice, key;
    do {
        printf("1. Insert\n2. Search\n3. Delete\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter key to insert: ");
                scanf("%d", &key);
                insert(hash_table, key);
                break;
            case 2:
                printf("Enter key to search: ");
                scanf("%d", &key);
                if (search(hash_table, key)) {
                    printf("Key %d found in the hash table.\n", key);
                } else {
                    printf("Key %d not found in the hash table.\n", key);
                }
                break;
            case 3:
                printf("Enter key to delete: ");
                scanf("%d", &key);
                delete(hash_table, key);
                break;
            case 4:
                display(hash_table);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice !=5 );
    return 0;
}