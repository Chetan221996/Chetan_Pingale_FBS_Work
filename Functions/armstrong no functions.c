#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int countDigits(int n) {
    if (n == 0) {
        return 1;
    }
    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

bool isArmstrong(int num) {
    if (num < 0) {
        return false;
    }
    int originalNum = num;
    int digits = countDigits(num);
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    return sum == originalNum;
}

int main() {
    int start, end;

    printf("Enter the lower limit of the range: ");
    scanf("%d", &start);
    printf("Enter the upper limit of the range: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
