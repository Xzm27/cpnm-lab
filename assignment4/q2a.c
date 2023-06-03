// Write a C program using functions which accepts a string from the user and performs the following tasks.
// a. Counts the number of characters in the string without using string library functions.

#include <stdio.h>

int countCharacters(char str[]) {
    int count = 0;
    int i = 0;

    while (str[i] != '\n') {
        count++;
        i++;
    }
    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int count = countCharacters(str);

    printf("Number of characters: %d\n", count);

    return 0;
}
