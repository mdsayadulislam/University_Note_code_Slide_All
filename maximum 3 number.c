#include <stdio.h>

int main() {
    int n1, n2, n3;

    // Taking input from the user
    printf("Enter three numbers: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    // Checking for maximum number
    if (n1 >= n2 && n1 >= n3) {
        printf("This number is maximum: %d\n", n1);
    } else if (n2 >= n1 && n2 >= n3) {
        printf("This number is maximum: %d\n", n2);
    } else {
        printf("This number is maximum: %d\n", n3);
    }

    return 0;
}
