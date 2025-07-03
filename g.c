#include<stdio.h>
int main()
{
    FILE *file = fopen("example.txt", "w");
    if(file == NULL)
    {
    printf("Error opening file.\n");
    return 1;
    }
     char line[100];
     while(fgets(line, sizeof(line), file)) {
         printf("%s", line);
     }
    
    fclose(file);
    return 0;
}