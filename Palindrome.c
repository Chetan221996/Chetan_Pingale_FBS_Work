#include <stdio.h>

int main() {
    int number, originalNumber, reversedNumber = 0, remainder;

    printf("Enter a three-digit integer: ");
    scanf("%d", &number);

    if (number < 100 || number > 999) {
        printf("Please enter a valid three-digit number.\n");
        return 1;
    }

    originalNumber = number;
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome number.\n", originalNumber);
    } else {
        printf("%d is not a palindrome number.\n", originalNumber);
    }

    return 0;
}
