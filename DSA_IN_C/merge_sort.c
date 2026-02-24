#include <stdio.h>
void merge(int a[], int low, int mid, int high);
void msortdiv(int a[], int low, int high);
int main() {
    int a[100], i, n; 
    printf("Enter the size of array: ");
    if (scanf("%d", &n) != 1 || n > 100) {
        printf("Invalid size.\n");
        return 1;
    }
    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]); 
    }
    msortdiv(a, 0, n - 1);
    printf("\nArray after Merge Sort: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
void msortdiv(int a[], int low, int high) {
    if (low < high) { 
        int mid = (low + high) / 2;
        msortdiv(a, low, mid);
        msortdiv(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}
void merge(int a[], int low, int mid, int high) {
    int i = low;
    int j = mid + 1;
    int k = low;
    int temp[100]; 
    while (i <= mid && j <= high) {
        if (a[i] <= a[j]) { 
            temp[k++] = a[i++];
        } else {
            temp[k++] = a[j++];
        }
    }   
    while (i <= mid) {
        temp[k++] = a[i++];
    }
    while (j <= high) {
        temp[k++] = a[j++];
    }
    for (i = low; i <= high; i++) {
        a[i] = temp[i];
    }
}