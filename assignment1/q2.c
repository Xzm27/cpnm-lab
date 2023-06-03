// If a three-digit integer is input through the keyboard, write a program to calculate the sum of its digits. (Hint: Use the modulo operator)

#include <stdio.h>

int main(){
    int num, sum;
    printf("Enter a three digit number:\n");
    scanf("%d", &num);
    sum = num % 10 + (num / 10) % 10 + num / 100;
    printf("Sum of the digits of %d is %d", num, sum);
    return 0;
}