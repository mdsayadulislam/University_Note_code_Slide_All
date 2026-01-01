
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n); // Use &n to store the input in n

    if (n % 5 == 0 && n % 11 == 0) {
        printf("%d is divisible by both 5 and 11.\n", n); // Clear output message
    } else {
        printf("%d is not divisible by both 5 and 11.\n", n); // Clear output message
    }

    return 0;
}

