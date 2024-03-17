#include <stdio.h>

int main() {
    FILE *file;
    char buffer[100];

    file = fopen("example.txt", "r");

    if (file != NULL) {
        fgets(buffer, sizeof(buffer), file);
        printf("Contents of file: %s", buffer);
        fclose(file);
    } else {
        printf("Error opening file!\n");
    }

    return 0;
}
