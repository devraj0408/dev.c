#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *src = fopen("source.txt", "r");
    FILE *dest = fopen("destination.txt", "w");
    if (!src || !dest) return 1;

    char ch;
    while ((ch = fgetc(src)) != EOF) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            fputc(ch, dest);
        }
    }

    fclose(src);
    fclose(dest);
    return 0;
}
