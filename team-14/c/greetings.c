#include <stdio.h>

int main() {
    int first, second;
    int sum;

    printf("Enter first number: ");
    scanf("%d", &first);

    printf("Enter second number: ");
    scanf("%d", second);

    sum = first + second;

    printf("Sum = %d\n", sum);

    return 0;
}
