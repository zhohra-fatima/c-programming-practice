
#include <stdio.h>

int main () {

    char ch;

    int uppercase, lowercase;

    printf("Enter an Alphabet : ");
    scanf("%c", &ch);

    uppercase = (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
    lowercase = (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');

    if (uppercase || lowercase) {
        printf("\n%c is a Vowel.\n", ch);
    }
    else {
        printf("\n%c is a Consonant.\n", ch);
    }

    return 0;
}
