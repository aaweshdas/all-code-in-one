#include <stdio.h>

#define ROWS 3
#define COLS 3

void printArray(int arr[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int array1[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int array2[ROWS][COLS] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    
    int sum[ROWS][COLS];

    // Calculate the sum of two arrays
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            sum[i][j] = array1[i][j] + array2[i][j];
        }
    }

    // Print the results
    printf("Array 1:\n");
    printArray(array1);
    
    printf("\nArray 2:\n");
    printArray(array2);
    
    printf("\nSum of Array 1 and Array 2:\n");
    printArray(sum);

    return 0;
}
