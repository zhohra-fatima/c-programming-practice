#include<stdio.h>

int main(){

    int num1, num2, sum;

    printf("Please Enter a Number : ");
    scanf("%d", &num1);

    printf("Please Enter another Number : ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("\nYour Result is : %d + %d = %d \n", num1, num2, sum);

    return 0;
}
