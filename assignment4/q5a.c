// Write a program that converts (Do not use any string library function): 
// a. A string like “123” to integer 123.

#include <stdio.h>

int stringToInteger(char str[]) {
    int result = 0;
    int i = 0;

    int sign = 1;
    if (str[0] == '-') {
        sign = -1;
        i++;
    }

    while (str[i] != '\0') {
        int digit = str[i] - 48;  

        if (digit >= 0 && digit <= 9) {
            result = result * 10 + digit;
        }
        
        i++;
    }

    return result * sign;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int number = stringToInteger(str);

    printf("Integer value: %d\n", number);

    return 0;
}
