#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    if (isupper(ch)) {
        printf("'%c' is an uppercase alphabet.\n", ch);
    }
    else if (islower(ch)) {
        printf("'%c' is a lowercase alphabet.\n", ch);
    }
    else {
        printf("'%c' is not an alphabet.\n", ch);
    }

    return 0;
}
