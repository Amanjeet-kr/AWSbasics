#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 10) {
        printf("The number is greater than 10.\n")
    } else {
        printf("The number is 10 or less.\n");
    }

    return 0;
}
