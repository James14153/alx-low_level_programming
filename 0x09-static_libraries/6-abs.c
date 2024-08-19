#include <stdio.h>

int _abs(int n) {
    // If n is negative, return its negation, otherwise return n
    return (n < 0) ? -n : n;
}

int main() {
    int num1 = -10;
    int num2 = 0;
    int num3 = 20;

    printf("Absolute value of %d is %d\n", num1, _abs(num1));
    printf("Absolute value of %d is %d\n", num2, _abs(num2));
    printf("Absolute value of %d is %d\n", num3, _abs(num3));

    return 0;
}

