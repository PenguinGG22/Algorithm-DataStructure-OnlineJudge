#include <stdio.h>

int main(void) {
    int num1, num2, temp;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    int a = num1;
    int b = num2;

    while (b > 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("The GCD of %d and %d is %d.\n", num1, num2, a);

    return 0;
}