// Write the function strend(s,t), which returns 1 if the string t occurs at the end of the string s, and
// zero otherwise.

#include <stdio.h>

int strend(const char *s, const char *t) {
    const char *s_ptr = s;
    const char *t_ptr = t;

    while (*s_ptr != '\0') {
        s_ptr++;
    }

    while (*t_ptr != '\0') {
        t_ptr++;
    }

    while (t_ptr >= t && s_ptr >= s) {
        if (*t_ptr != *s_ptr) {
            return 0;  
        }
        t_ptr--;
        s_ptr--;
    }

    if (t_ptr < t) {
        return 1; 
    } 
    else {
        return 0;  
    }
}

int main() {
    char str1[100];
    char str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    if (strend(str1, str2)) {
        printf("String 2 occurs at the end of String 1.\n");
    } 
    else {
        printf("String 2 does not occur at the end of String 1.\n");
    }

    return 0;
}
