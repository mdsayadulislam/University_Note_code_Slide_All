#include <stdio.h>

int main() {
    int N, hours, minutes, seconds;

    scanf("%d", &N);

    hours = N / 3600;


    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
