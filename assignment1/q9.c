// Any character is entered through the keyboard, write a program to determine whether the character entered 
// is a capital letter, a small case letter, a digit or a special symbol. 


#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    //for capital characters (A to Z)
    if (ch >= 65 && ch <= 90)
        printf("%c is a capital letter", ch);

    //for small characters (a to z)
    else if (ch >= 97 && ch <=122)
        printf("%c is a small letter", ch);

    //for digits (0 to 9)
    else if (ch >=48 && ch <= 57)
        printf("%c is a digit", ch);

    //for special symbols
    else if (ch>=0 && ch<=47 || ch>=58 && ch<=64 || ch>=91 && ch<=96 || ch>=123 && ch<=127)
        printf("%c is a special symbols", ch);

}