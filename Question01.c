#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Taking input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the input is a valid positive integer
    if (num <= 1) {
        isPrime = 0;  // 0, 1, and negative numbers are not prime
    } else {
        // Check divisibility from 2 to sqrt(num) to check if it's prime
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;  // If divisible by any number, it's not prime
                break;
            }
        }
    }

    // Output the result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}

