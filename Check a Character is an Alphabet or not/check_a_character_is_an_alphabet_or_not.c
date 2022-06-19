
#include <stdio.h>

int main () {

    char ch;

    printf("Enter a Input : ");
    scanf("%c", &ch);

    if (ch>='a' && ch<='z') {
        printf("\n%c is a Small Letter Alphabet\n", ch);
    }

    else if (ch>='A' && ch<='Z') {
        printf("\n%c is a Capital Letter Alphabet\n", ch);
    }

    else {
        printf("\n%c is not an Alphabet\n", ch);
    }

    return 0;
}
