// Write a c program to print the multiplication table of a number entered by the user

#include <stdio.h>

void main(){
    int num, lim, i;
    printf("Enter multiplication table number: ");
    scanf("%d", &num);
    printf("Enter number upto which you want multiplication table: ");
    scanf("%d", &lim);
    for (i = 1; i <= lim; i++){
        printf("%d x %d = %d\n", num, i, num * i);
    }
}