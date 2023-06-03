// Write a function squeeze(s,c) which removes all occurrences of the character c from the string s.

#include <stdio.h>

void squeeze(char s[], char c) {
    int i, j;

    i = j = 0;

    while (s[i] != '\0') {
        if (s[i] != c) {
            s[j] = s[i];
            j++;
        }
        i++;
    }

    s[j] = '\0';
}

int main() {
    char str[100];
    char c;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to remove: ");
    scanf("%c", &c);

    squeeze(str, c);

    printf("String after squeezing: %s\n", str);

    return 0;
}
