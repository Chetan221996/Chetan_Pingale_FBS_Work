#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter the lengths of the three sides of the triangle:\n");
    printf("Side 1: ");
    scanf("%d", &side1);
    printf("Side 2: ");
    scanf("%d", &side2);
    printf("Side 3: ");
    scanf("%d", &side3);

    if (side1 == side2 && side2 == side3) {
        printf("The triangle is an Equilateral Triangle.\n");
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("The triangle is an Isosceles Triangle.\n");
    } else {
        printf("The triangle is a Scalene Triangle.\n");
    }

    return 0;
}
