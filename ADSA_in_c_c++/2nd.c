#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main() { 
    int size, n, key, i;

    printf("Enter Size of hash table: ");
    scanf("%d", &size);

    int hashTable[size];

    // Initialize hash table
    for (i = 0; i < size; i++)
        hashTable[i] = INT_MIN;

    printf("Enter number of elements to insert: ");
    scanf("%d", &n);

    if (n > size) {
        printf("Insertion not possible\n");
        exit(0);
    }

    printf("Enter %d elements:\n", n);

     

    for (i = 0; i < n; i++) {
        scanf("%d", &key);

        int index = key % size;
        if (index < 0) index += size;   // safety for negative keys

        int j = 1;
        while (hashTable[index] != INT_MIN) {
            index = (key + j) % size;
            j++;
        }
        hashTable[index] = key;
    }

    // Display hash table
    printf("\nHash Table:\n");
    for (i = 0; i < size; i++) {
        if (hashTable[i] == INT_MIN)
            printf("%d --> EMPTY\n", i);
        else
            printf("%d --> %d\n", i, hashTable[i]);
    }

    return 0;
}