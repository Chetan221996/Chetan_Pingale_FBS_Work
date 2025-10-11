#include <stdio.h>

int main() {
    float sub1, sub2, sub3, sub4, sub5;
    float totalMarks;
    float percentage;

    printf("Enter marks for Subject 1 (out of 100): ");
    scanf("%f", &sub1);

    printf("Enter marks for Subject 2 (out of 100): ");
    scanf("%f", &sub2);

    printf("Enter marks for Subject 3 (out of 100): ");
    scanf("%f", &sub3);

    printf("Enter marks for Subject 4 (out of 100): ");
    scanf("%f", &sub4);

    printf("Enter marks for Subject 5 (out of 100): ");
    scanf("%f", &sub5);

    totalMarks = sub1 + sub2 + sub3 + sub4 + sub5;

    percentage = (totalMarks / 500.0) * 100;

    printf("\nTotal Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
