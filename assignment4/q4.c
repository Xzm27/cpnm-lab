// Write a program to count the number of occurrences of any two vowels in succession in a line of
// text.

#include <stdio.h>
#include <ctype.h>

int isVowel(char c) {
    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return 1;
    }
    return 0;
}

int countSuccessiveVowels(char str[]) {
    int count = 0;
    int i = 0;
    int vowels = 0;

    while (str[i] != '\0') {
        if (isVowel(str[i])==1) {
            vowels++;
            if (vowels >= 2) {
                count++;
            }
        } 
        else {
            vowels = 0;
        }
        i++;
    }
    return count;
}

int main() {
    char str[100];

    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);

    int count = countSuccessiveVowels(str);

    printf("Number of occurrences of two successive vowels: %d\n", count);

    return 0;
}
