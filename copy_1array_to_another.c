#include <stdio.h>

void copyArray(int *source, int *destination, int n) {
    for (int i = 0; i < n; i++) destination[i] = source[i];
}

int main() {
    int n;
    printf("Enter the number of elements to copy: ");
    scanf("%d", &n);

    int source[n], destination[n];
    printf("Enter %d elements for the source array:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &source[i]);

    copyArray(source, destination, n);

    printf("Elements in the destination array are:\n");
    for (int i = 0; i < n; i++) printf("%d ", destination[i]);
    printf("\n");

    int A[] = {1, 2, 3, 4, 5}, B[5];
    copyArray(A, B, 5);

    printf("Elements in the destination array B are:\n");
    for (int i = 0; i < 5; i++) printf("%d ", B[i]);
    printf("\n");

    return 0;
}
