#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("example.txt", "w");

    if (file != NULL)
    {
        fprintf(file, "Hello, World!\n");
        fclose(file);
    }
    else
    {
        printf("Error opening file!\n");
    }
}
