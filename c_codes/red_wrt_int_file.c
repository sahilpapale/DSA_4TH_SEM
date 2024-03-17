#include <stdio.h>

int main()
{
    FILE *file;
    int num = 42;
    int readNum;

    file = fopen("integer.txt", "w");
    fprintf(file, "%d", num);
    fclose(file);

    file = fopen("integer.txt", "r");
    fscanf(file, "%d", &readNum);
    fclose(file);

    printf("Read from file: %d\n", readNum);
}
