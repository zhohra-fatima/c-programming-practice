
#include <stdio.h>

int main () {

    double a, b, c;

    printf("Enter three numbers :");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a>b && a>c) {
        printf("\nThe Largest Number : %.2lf \n", a);
    }
    else if (b>a && b>c) {
        printf("\nThe Largest Number : %.2lf \n", b);
    }
    else {
        printf("\nThe Largest Number : %.2lf \n", c);
    }

    return 0;
}
