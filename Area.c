#include <stdio.h>

int main() {
    double R, A;
    const double pi = 3.14159;

    // Read the radius (R) from input
    scanf("%lf", &R);

    // Calculate the area using the formula A = pi * R^2
    A = pi * R * R;

    // Print the result with 4 decimal places
    printf("A=%.4lf\n", A);

    return 0;
}

