#include <stdio.h>

int main() {

    int n;

    printf("Enter a Number : ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("\nYou Write a Even Number\n");
    }
    else {
        printf("\nYou write a Odd Number\n");
    }

    return 0;
}
