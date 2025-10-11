#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");

    scanf("%d", &number);

    int square = number * number;
    int cube = number * number * number;

    printf("The square of %d is: %d\n", number, square);
    printf("The cube of %d is: %d\n", number, cube);

    return 0;
}
