#include <stdio.h>
int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int length = stringLength(str);
    printf("The length of the string is: %d\n", length);

    return 0;
}