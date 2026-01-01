#include <stdio.h>

int main() {
    int n, i;

    // Read number of scores
    printf("Enter the number of scores: ");
    scanf("%d", &n);

    int scores[n];

    // Read scores into array
    printf("Enter the scores:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    // Initialize max and min to the first element of the array
    int max = scores[0];
    int min = scores[0];

    // Find max and min scores
    for (i = 1; i < n; i++) {
        if (scores[i] > max) {
            max = scores[i];
        }
        if (scores[i] < min) {
            min = scores[i];
        }
    }

    // Print the results
    printf("Maximum score: %d\n", max);
    printf("Minimum score: %d\n", min);

    return 0;
}
