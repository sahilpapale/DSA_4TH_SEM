#include <stdio.h>

int main() {
    FILE *file;
    int readNumbers[5];

    // Open the file in binary read mode
    file = fopen("array_data.bin", "rb");

    if (file != NULL) {
        // Read the entire array from the file
        fread(readNumbers, sizeof(int), sizeof(readNumbers) / sizeof(int), file);

        // Close the file
        fclose(file);

        // Display the read array
        printf("Read from file: ");
        for (int i = 0; i < sizeof(readNumbers) / sizeof(int); i++) {
            printf("%d ", readNumbers[i]);
        }
        printf("\n");
    } else {
        printf("Error opening file!\n");
    }
}
