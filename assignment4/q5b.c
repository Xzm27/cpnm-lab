// An integer like 123 to string “123”

#include <stdio.h>

void integerToString(int number, char str[]) {
    int i = 0;

    int sign = 1;
    if (number < 0) {
        sign = -1;
        number = -number;
    }

    do {
        str[i++] = number % 10 + '0';
        number /= 10;
    } while (number > 0);

    if (sign == -1) {
        str[i++] = '-';
    }

    int start = 0;
    int end = i - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    str[i] = '\0';
}

int main() {
    int number;
    char str[100];

    printf("Enter an integer: ");
    scanf("%d", &number);

    integerToString(number, str);

    printf("String representation: %s\n", str);

    return 0;
}
