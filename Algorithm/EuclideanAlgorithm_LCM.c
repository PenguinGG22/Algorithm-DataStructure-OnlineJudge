#include <stdio.h>

int main(void) {
    int num1, num2, temp, LCM;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    int a = num1;
    int b = num2;

    while (b > 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    LCM = num1 * num2 / a;

    printf("The LCM of %d and %d is %d.\n", num1, num2, LCM);

    return 0;
}