#include <stdio.h>

int main() {
    int num;
    int min = 10, max = 20;
    printf("the given range is 10 to 20");
    printf("enter a number=");
    scanf("%d",&num);


    if(num >= min && num <= max) {
        printf("The number is in given range.\n");
    } else {
        printf("The number is not in given range.\n");
    }

    return 0;
}
