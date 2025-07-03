#include <stdio.h>

#define SIZE 3 // Define the size of the matrix

int main() {
    int matrix[SIZE][SIZE];
    int i, j, sum = 0;

    // Input the matrix elements
    printf("Enter the elements of the %dx%d matrix:\n", SIZE, SIZE);
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            scanf("%d", &matrix[i][j]);
        }
        
    }

    // Calculate the sum of the diagonal elements
    for (i = 0; i < SIZE; i++) {
        sum += matrix[i][i];
    }

    // Print the sum of the diagonal elements
    printf("Sum of the diagonal elements: %d\n", sum);

    return 0;
}