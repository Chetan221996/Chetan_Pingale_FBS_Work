#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') {
            str[i] = '$';
        }
    }

    printf("Modified string: %s", str);

    return 0;
}
