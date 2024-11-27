#include <stdio.h>

#define MAX 10

void multiplyMatrices(int firstMatrix[][MAX], int secondMatrix[][MAX], int resultMatrix[][MAX], int firstRows, int firstCols, int secondCols) {
    for (int i = 0; i < firstRows; i++) {
        for (int j = 0; j < secondCols; j++) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < firstCols; k++) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int firstMatrix[MAX][MAX], secondMatrix[MAX][MAX], resultMatrix[MAX][MAX];
    int firstRows, firstCols, secondRows, secondCols;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &firstRows, &firstCols);

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < firstRows; i++) {
        for (int j = 0; j < firstCols; j++) {
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &secondRows, &secondCols);

    if (firstCols != secondRows) {
        printf("Error! Columns of first matrix must equal rows of second matrix.\n");
        return -1;
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < secondRows; i++) {
        for (int j = 0; j < secondCols; j++) {
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    multiplyMatrices(firstMatrix, secondMatrix, resultMatrix, firstRows, firstCols, secondCols);
    printf("Resultant Matrix:\n");
    displayMatrix(resultMatrix, firstRows, secondCols);

    return 0;
}
