#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Generate 10 random numbers between 0 and 50
    srand(5);

    // Open a file for writing
    FILE *writeFile = fopen("random_numbers.txt", "w");

    if (writeFile == NULL) {
        fprintf(stderr, "Error opening file for writing\n");
        return 1; // Exit with an error code
    }

    for (int i = 0; i < 10; ++i) {
        int random = rand() %51; // Generate a random number between 0 and 50
        fprintf(writeFile,"%d\n", random);
    }

    fclose(writeFile);

    // Read and display the generated numbers from the file
    FILE *readFile = fopen("random_numbers.txt", "r");

    if (readFile == NULL) {
        fprintf(stderr, "Error opening file for reading\n");
        return 1; // Exit with an error code
    }

    printf("Generated Numbers:\n");

    while (fscanf(readFile, "%d", &rand) != EOF) {
        printf("%d\n", rand);
    }

    fclose(readFile);

    return 0; // Exit successfully
}

