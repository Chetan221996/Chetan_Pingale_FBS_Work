#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    if (len > 1) {
        char temp = str[0];
        str[0] = str[len - 1];
        str[len - 1] = temp;
    }

    printf("New string after swapping first and last characters: %s\n", str);

    return 0;
}
