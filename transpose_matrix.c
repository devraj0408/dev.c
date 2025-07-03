#include <stdio.h>

#define SIZE 3

void transposeMatrix(int matrix[SIZE][SIZE], int transposed[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            transposed[j][i] = matrix[i][j];
}

void printMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++, printf("\n"))
        for (int j = 0; j < SIZE; j++)
            printf("%d ", matrix[i][j]);
}

int main() {
    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int transposed[SIZE][SIZE];

    printf("Original Matrix:\n");
    printMatrix(matrix);

    transposeMatrix(matrix, transposed);

    printf("\nTransposed Matrix:\n");
    printMatrix(transposed);

    return 0;
}
