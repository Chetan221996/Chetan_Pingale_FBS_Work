#include <stdio.h>
#include <ctype.h>

int main() {
    char str[300];
    int i = 0, words = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (!isspace(str[i]) &&
           (i == 0 || isspace(str[i - 1]))) {
            words++;
        }
        i++;
    }

    printf("Number of words: %d\n", words);

    return 0;
}
