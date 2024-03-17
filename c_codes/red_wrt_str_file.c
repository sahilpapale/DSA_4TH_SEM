#include <stdio.h>

int main()
 {
    FILE *file;
    char str[] = "Hello ";
    char buffer[50];

    file = fopen("example.txt", "w");
    fprintf(file, "%s", str);
    fclose(file);

    file = fopen("example.txt", "r");
    fscanf(file, "%s", buffer);
    fclose(file);

    printf("Read from file: %s\n", buffer);
}
