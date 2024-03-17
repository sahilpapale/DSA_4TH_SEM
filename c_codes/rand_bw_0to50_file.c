#include <stdio.h>
#include<stdlib.h>

void sorting(int array[]);


main()
{
 int random,i;
 int array[100];
 srand(time(NULL));
 FILE *file;

file = fopen("random_no.txt", "w");
printf("random no bw 1 to 50 is\n ");
  for(i=0;i<=10;i++)
  {
   array[i]=rand()%50+1;
   printf("%d\n",array[i]);

   fprintf(file, "%d\n",array[i]);
  }
fclose(file);

 int j,k;
 int buffer[100];
 file = fopen("random_no.txt", "r");
 printf("conten of fie= ");
 fgets(buffer, sizeof(buffer[j]), file);
 for(j=0;j<=10;j++)
 {
     fgets(buffer, sizeof(buffer[j]), file);
        printf("%d ", buffer[j]);

 }
 fclose(file);
}
