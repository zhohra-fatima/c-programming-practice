#include <stdio.h>

int main () {

    int y;

    printf("Enter a Year : ");
    scanf("%d", &y);

    if (y % 400 == 0) {
        printf("\n%d is a Leap Year \n", y);
    }
    else if (y % 100 == 0) {
        printf("\n%d is not a Leap Year \n", y);
    }
    else if (y % 4 == 0) {
        printf("\n%d is a Leap Year \n", y);
    }
    else {
        printf("\n%d is not a Leap Year \n", y);
    }

    return 0;
}
