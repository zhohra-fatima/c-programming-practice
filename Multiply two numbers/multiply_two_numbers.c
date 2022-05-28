#include<stdio.h>

int main() {

    double num1, num2, mul;

    printf("Please Enter a Number : ");
    scanf("%lf", &num1);

    printf("Please Enter another Number : ");
    scanf("%lf", &num2);

    mul = num1 * num2;

    printf("\nYour Result is : %lf * %lf = %.2lf \n", num1, num2, mul);

    return 0;

}
