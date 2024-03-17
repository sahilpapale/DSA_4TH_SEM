#include <stdio.h>
#include <stdlib.h>
#include<time.h>

main()
{
int random;
srand(time(NULL));
random=rand()%6+1;
printf("No on Dice =%d\n",random);
}
