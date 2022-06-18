
#include <stdio.h>
int main () {

    double n;

    printf("Enter a Number: ");
    scanf("%lf", &n);

    if (n > 0) {
        printf("\n%.2lf is a Positive Number.\n", n);
    }
    else if (n < 0) {
        printf("\n%.2lf is a Negative Number.\n", n);
    }
    else {
        printf("\nYou Entered %.2lf Number.\n", n);
    }
    return 0;
}
