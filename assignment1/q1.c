// Write a C program that reads two values from the keyboard, swaps their values and prints out the result. 

#include <stdio.h>

int main(){
    int val1, val2, temp;
    printf("Enter the first value:\n");
    scanf("%d", &val1);
    printf("Enter the second value:\n");
    scanf("%d", &val2);
    printf("Before swapping\n");
    printf("Value 1 is: %d\n", val1);
    printf("Value 2 is: %d\n", val2);
    temp = val1;
    val1 = val2;
    val2 = temp;
    printf("After swapping\n");
    printf("Value 1 is: %d\n", val1);
    printf("Value 2 is: %d\n", val2);
    return 0;
}