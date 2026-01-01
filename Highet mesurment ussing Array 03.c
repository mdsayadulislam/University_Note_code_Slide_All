
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 50

int main() {
    int n;
    float heights[MAX_STUDENTS], sum = 0.0, average;
    char names[MAX_STUDENTS][MAX_NAME_LENGTH];

    // Input number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Input names and heights of each student
    for (int i = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter the height of %s (in cm): ", names[i]);
        scanf("%f", &heights[i]);

        // Sum the heights
        sum += heights[i];
    }

    // Calculate average height
    average = sum / n;

    // Display students taller than the average height
    printf("\nAverage height: %.2f cm\n", average);
    printf("Students taller than the average height:\n");
    for (int i = 0; i < n; i++) {
        if (heights[i] > average) {
            printf("%s (%.2f cm)\n", names[i], heights[i]);
        }
    }

    return 0;
}
