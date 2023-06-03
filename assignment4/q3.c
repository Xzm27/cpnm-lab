// Write a C program which accepts a full name from the user prints the initials. Eg. SRT for Sachin
// Ramesh Tendulkar.

#include <stdio.h>
#include <ctype.h>

void printInitials(char name[]) {
    int i = 0;

    printf("%c", toupper(name[0]));

    while (name[i] != '\0') {
        if (name[i] == ' ') {
            printf("%c", toupper(name[i + 1]));
        }
        i++;
    }
    printf("\n");
}

int main() {
    char name[100];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: ");
    printInitials(name);

    return 0;
}
