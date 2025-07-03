#include <stdio.h>

int main() {
    int a, b, c, largest;

    // Input three numbers
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);

    // Compare numbers to find the largest
    if (a > b && a > c) {
        largest = a;
    } else if (b > c) {
        largest = b;
    } else {
        largest = c;
    }

    // Output the result
    printf("The largest number is: %d\n", largest);
}


