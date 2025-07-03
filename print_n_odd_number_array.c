#include <stdio.h>

void main() {
    int A[100] , n  , i;
    printf("Enter the 10 elements in the array: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }
    
    printf("Odd elements:\n");
    for (i = 0; i < 10; i++) {
        if (A[i] % 2 != 0) {
            printf("%d ", A[i]);
        }
    }
}