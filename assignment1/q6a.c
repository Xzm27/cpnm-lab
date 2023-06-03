// Write a program to check whether a triangle is valid or not, when (i) the three angles of the
// triangle are entered through the Keyboard (ii) three sides of the triangle are entered through the
// keyboard.

#include <stdio.h>

int main(){
    int side1, side2, side3;
    printf("Enter first side:\n");
    scanf("%d", &side1);
    printf("Enter second side:\n");
    scanf("%d", &side2);
    printf("Enter third side:\n");
    scanf("%d", &side3);
    if((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)){
        printf("Triangle is valid.");
    }
    else{
        printf("Triangle is not valid.");
    }
    return 0;
}