#include <stdio.h>

int main() {
    int age;
    while(1)
    {
    printf("ENTER UR AGE=\n");
    scanf("%d",&age);

    if(age >= 18)
    {
        printf("Eligible for voting.\n");
    } else if (age < 18)
    {
        printf("not Eligible for voting.\n");
    }
    else
    {
    printf("INVALID.\n");
    }
    }
}
