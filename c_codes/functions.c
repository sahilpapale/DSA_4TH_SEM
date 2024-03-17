#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 5);
    printf("Sum: %d\n", result);

    return 0;
}
