#include <stdio.h>

int main()
{
    FILE *file;
    int numbers[] = {1, 2, 3, 4, 5};

    // file in binary write mode
    file = fopen("array_data.bin", "wb");

    if (file != NULL)
        {
        // Write array to file
        fwrite(numbers, sizeof(int), sizeof(numbers) / sizeof(int), file);

        // Close file
        fclose(file);
        printf("Array successfully written to file.\n");
    }
    else
    {
        printf("Error opening file!\n");
    }
}
