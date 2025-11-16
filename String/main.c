#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int n, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Enter the index to remove: ");
    scanf("%d", &n);

    len = strlen(str);

    if (n < 0 || n >= len) {
        printf("Invalid index!\n");
        return 1;
    }

    for (int i = n; i < len; i++) {
        str[i] = str[i + 1];
    }

    printf("String after removal: %s\n", str);

    return 0;
}

