#include <stdio.h>

int main() {
    int math, science, english;
    int total;
    float average;

    printf("Enter marks in Math: ");
    scanf("%d", &math);

    printf("Enter marks in Science: ");
    scanf("%d", &science);

    printf("Enter marks in English: ");
    scanf("%d", &english);

    total = math + science + english;
    average = total / 2.0;

    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}
