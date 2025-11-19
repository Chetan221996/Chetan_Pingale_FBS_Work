#include <stdio.h>

int main() {
    char str[200], result[200];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (i % 2 == 0) {
            result[j++] = str[i];

        }
    }

    result[j] = '\0';

    printf("String after removing odd index characters: %s\n", result);

    return 0;
}
