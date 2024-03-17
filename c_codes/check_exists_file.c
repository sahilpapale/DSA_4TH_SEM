#include <stdio.h>

int main()
 {
    FILE *file;
    char filename[] = "example.txt";

    if ((file = fopen(filename, "r")) != NULL)
    {
        printf("File %s exists.\n", filename);
        fclose(file);
    }
    else
    {
        printf("File %s does not exist.\n", filename);
    }
}
