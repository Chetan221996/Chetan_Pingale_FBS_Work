#include <stdio.h>

int main() {
    int num, reversed_num = 0, remainder, original_num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original_num = num;

    while(num != 0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }

    if(original_num == reversed_num) {
        printf("%d is a palindrome number.\n", original_num);
    } else {
        printf("%d is not a palindrome number.\n", original_num);
        printf("The reversed number is: %d\n", reversed_num);
    }

    return 0;
}
