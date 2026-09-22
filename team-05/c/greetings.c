#include <stdio.h>

int main() {
    int a, b, total;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    total = a - b;

    printf("The total is: %d\n", total);

    return 0;
}
