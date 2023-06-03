// Write recursive functions for following tasks.
// a. Binary equivalent of a number.

#include <stdio.h>

void decimalToBinary(int decimal) {
    if (decimal > 0) {
        decimalToBinary(decimal / 2);
        printf("%d", decimal % 2);
    }
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    printf("Binary equivalent: ");
    decimalToBinary(decimal);
    printf("\n");

    return 0;
}
