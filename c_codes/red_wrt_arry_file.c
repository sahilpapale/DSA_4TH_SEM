#include <stdio.h>

int main()
{
    FILE *file;
    int numbers[]={1, 2, 3, 4, 5};
    int readNumbers[5];

    file=fopen("numbers.bin", "wb");

    if(file!=NULL)
    {
        fwrite(numbers,sizeof(int),sizeof(numbers)/sizeof(int),file);
        fclose(file);
    }
    else
    {
        printf("Error opening file!\n");
    }

    file=fopen("numbers.bin","rb");

    if(file!=NULL)
    {
        fread(readNumbers,sizeof(int),sizeof(numbers)/sizeof(int),file);
        fclose(file);

        printf("Read from file: ");
        for(inti=0;i<sizeof(numbers)/sizeof(int);i++)
        {
            printf("%d",readNumbers[i]);
        }
        printf("\n");
    }
     else
    {
        printf("Error opening file!\n");
    }
}
