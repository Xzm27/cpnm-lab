// Write a C program which accepts a string from the user and performs the following tasks. (Do not use any string library function. ) 
// a. Check whether it is palindrome or not. [Example of a palindrome string: "abcba", "abba"] 
// b. Counts the number of characters and words in it. 

#include <stdio.h>

int isPalindrome(char str[]) {
    int length = 0;
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } 
    else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}
