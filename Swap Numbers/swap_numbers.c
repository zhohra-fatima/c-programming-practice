
#include <stdio.h>

int main() {

    double a, b, temp;

    printf("Enter first number: ");
    scanf("%lf", &a);

    printf("Enter second number: ");
    scanf("%lf", &b);

    temp = a;

    a = b;

    b = temp;

    printf("\nAfter swapping First number = %.2lf\n", a);
    printf("\nAfter swapping Second number = %.2lf\n", b);

    return 0;
}
