
#include <stdio.h>

int main () {

    int first, last, sum=0, i;

    printf("Enter a First Value : ");
    scanf("%d", &first);

    printf("\nEnter a Last Value : ");
    scanf("%d", &last);

    for (i=first; i<=last; i++) {

        sum = sum + i;
    printf("\nSum : %d + %d= %d\n", sum - i, i, sum);
    }
    printf("\nTotal Sum is : %d\n", sum);

    return 0;
}
