#include <stdio.h>
#include <stdlib.h>
#include<time.h>

main()
{
int random;
int array[]={ 10,20,30,40,50};

srand(time(NULL));
random=rand()%5;
printf("random no from array =%d\n",array[random]);

}
