// Prints the reverse of a string without using string functions

#include <stdio.h>

void reverseString(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Reversed string: ");
    reverseString(str);
    printf("\n");

    return 0;
}
