#include <stdio.h>
#include <stdlib.h>

main()
{
int random;
int min,max;

printf("enter min no=");
scanf("%d",&min);

printf("enter max no=");
scanf("%d",&max);

srand(1);
random=rand()%(max-min+1);
printf("Random no b\w %d to %d=%d\n",min,max,random);

}
