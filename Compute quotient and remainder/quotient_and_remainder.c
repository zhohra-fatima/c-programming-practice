#include <stdio.h>

int main() {

    int dividend, divisor, quotient, remainder;

    printf("Enter a Dividend Number : ");
    scanf("%d", &dividend);

    printf("Enter a Divisor Number : ");
    scanf("%d", &divisor);

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("\nYour Quotient Number : %d\n", quotient);
    printf("Your Remainder Number : %d\n", remainder);

    return 0;
}
