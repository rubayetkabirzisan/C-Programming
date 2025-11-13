#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    // get user input for n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // loop through numbers from 1 to n
    for (i = 2; i <= n; i++) {
        isPrime = 1; // assume number is prime
        // loop through numbers from 2 to i-1 to check if i is divisible
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0; // i is not prime
                break; // exit the inner loop
            }
        }
        // if isPrime is still 1, then i is prime
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}

