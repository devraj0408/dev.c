#include<stdio.h>
int main()
{
    FILE *file = fopen("example.txt", "w");
    if(file == NULL)
    {
    printf("Error opening file.\n");
    return 1;
    }

    printf("File opened successfully.\n");
    fclose(file);
    return 0;
}