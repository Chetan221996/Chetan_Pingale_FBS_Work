
#include <stdio.h>


int isPrime(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;

    printf("Enter the upper limit (n) to find prime numbers (>= 2): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("There are no prime numbers up to %d\n", n);
    } else {
        printf("Prime numbers between 1 and %d are: ", n);
        for (int i = 2; i <= n; i++) {
            if (isPrime(i)) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}
