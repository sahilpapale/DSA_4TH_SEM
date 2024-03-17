#include <stdio.h>

int main() {
    int num;
    printf("enter a number= \n");
    scanf("%d",&num);

    if(num > 0) {
        printf("The number is positive.\n");
    } else {
        printf("The number is not positive.\n");
    }

    return 0;
}
