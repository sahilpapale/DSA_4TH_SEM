#include <stdio.h>

int main()
 {
    if (remove("example.txt") == 0)
    {
        printf("File deleted successfully.\n");
    } else
    {
        printf("Error deleting file!\n");
    }
}
