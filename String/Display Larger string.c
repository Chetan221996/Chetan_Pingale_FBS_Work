#include <stdio.h>

int main() {
    char str1[200], str2[200];
    int len1 = 0, len2 = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for (int i = 0; str1[i] != '\0'; i++) {
        len1++;
    }

    for (int i = 0; str2[i] != '\0'; i++) {
        len2++;
    }

    if (len1 > len2) {
        printf("Larger string: %s\n", str1);
    } else if (len2 > len1) {
        printf("Larger string: %s\n", str2);
    } else {
        printf("Both strings are of equal length.\n");
    }

    return 0;
}
