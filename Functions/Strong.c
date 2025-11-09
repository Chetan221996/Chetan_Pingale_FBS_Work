#include <stdio.h>

long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int isStrongNumber(int num) {
    int temp = num;
    long long sum_of_factorials = 0;

    while (temp > 0) {
        int digit = temp % 10;
        sum_of_factorials += factorial(digit);
        temp /= 10;
    }

    return (sum_of_factorials == num);
}

void printStrongNumbersInRange(int start, int end) {
    printf("Strong numbers between %d and %d are: \n", start, end);
    for (int i = start; i <= end; i++) {
        if (isStrongNumber(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    if (n < 1) {
        printf("The upper limit must be at least 1.\n");
        return 1;
    }

    printStrongNumbersInRange(1, n);

    return 0;
}
