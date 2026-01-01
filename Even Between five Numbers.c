#include <stdio.h>

int main() {
    int numbers[5];
    int even_count = 0;

    // Read 5 integer values from the user
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
        // Check if the number is even
        if (numbers[i] % 2 == 0) {
            even_count++;
        }
    }

    // Print the number of even values
    printf("%d valores pares\n", even_count);

    return 0;
}
