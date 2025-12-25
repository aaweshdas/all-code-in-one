#include <iostream>
using namespace std;

#define SIZE 10

struct Node {
    int key;
    Node* next;
};

int hashFunc(int k) {
    return k % SIZE;
}

void insert(Node* t[], int k) {
    int i = hashFunc(k);
    Node* n = new Node{ k, t[i] };
    t[i] = n;
}

bool search(Node* t[], int k) {
    for (Node* c = t[hashFunc(k)]; c; c = c->next)
        if (c->key == k) return true;
    return false;
}

void display(Node* t[]) {
    for (int i = 0; i < SIZE; i++) {
        cout << i << ": ";
        for (Node* c = t[i]; c; c = c->next)
            cout << c->key << " -> ";
        cout << "NULL\n";
    }
}

int main() {
    Node* table[SIZE] = {NULL};

    insert(table, 10);
    insert(table, 20);
    insert(table, 15);

    display(table);

    cout << (search(table, 15) ? "Found" : "Not Found");
    return 0;
}