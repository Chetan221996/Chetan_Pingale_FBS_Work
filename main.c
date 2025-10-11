#include <stdio.h>

int main() {
    int num1, num2, temp;

    printf("Enter two integers: \n");

    scanf("%d %d", &num1, &num2);

    printf("Before Swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nAfter Swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);

    return 0;
}
