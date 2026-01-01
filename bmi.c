#include <stdio.h>
//#include <math.h> // Required for pow function

int main() {
    float w, h, bmi; // Use float for weight, height, and BMI

    // Prompt user for input
    printf("Enter your weight (kg) and height (m): ");
    scanf("%f %f", &w, &h); // Correct format specifiers

    // Calculate BMI
    bmi = w / pow(h, 2); // Use height squared

    // Print the result
    printf("Your BMI is: %.2f\n", bmi);

    return 0;
}

