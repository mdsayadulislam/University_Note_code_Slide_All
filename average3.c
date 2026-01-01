#include <stdio.h>

int main() {
    float N1, N2, N3, N4, examScore, average, finalAverage;

    // Reading the four scores
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    // Calculating the weighted average
    average = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;
    printf("Media: %.1f\n", average);

    // Checking the student's status
    if (average >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (average < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        // Reading the exam score
        scanf("%f", &examScore);
        printf("Nota do exame: %.1f\n", examScore);

        // Recalculating the average
        finalAverage = (average + examScore) / 2;

        if (finalAverage >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", finalAverage);
    }

    return 0;
}

