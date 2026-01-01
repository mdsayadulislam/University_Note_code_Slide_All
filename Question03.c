#include <stdio.h>

int main() {
    char ch;

    printf("Enter a capital letter: ");
    scanf(" %c", &ch);  // Space before %c to ignore any newline characters

    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;  // Convert to lowercase
        printf("Small letter: %c\n", ch);
    } else {
        printf("Not a capital letter!\n");
    }

    return 0;
}

