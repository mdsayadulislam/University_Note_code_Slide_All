
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 50

int main() {
    int n;
    char names[MAX_STUDENTS][MAX_NAME_LENGTH];
    char temp[MAX_NAME_LENGTH];

    // Read the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Read student names
    printf("Enter the names of the students:\n");
    for (int i = 0; i < n; i++) {
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    // Sort the names in alphabetical order
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                // Swap names[i] and names[j]
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    // Print the sorted names
    printf("\nNames in alphabetical order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
