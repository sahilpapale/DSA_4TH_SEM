#include <stdio.h>
#include <stdlib.h>
#include<time.h>

main()
{
char random;
srand(time(NULL));
random='A'+rand()%26;
printf("Random char =%c\n",random);

}
