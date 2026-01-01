#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Display the original values
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping without a third variable
    a = a + b;  // Step 1: a now holds the sum of a and b
    b = a - b;  // Step 2: b now becomes the original value of a
    a = a - b;  // Step 3: a now becomes the original value of b

    // Display the swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

