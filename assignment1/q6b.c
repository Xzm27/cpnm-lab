// Write a program to check whether a triangle is valid or not, when (i) the three angles of the
// triangle are entered through the Keyboard (ii) three sides of the triangle are entered through the
// keyboard.

#include <stdio.h>

int main(){
    int angle1, angle2, angle3;
    printf("Enter first angle:\n");
    scanf("%d", &angle1);
    printf("Enter second angle:\n");
    scanf("%d", &angle2);
    printf("Enter third angle:\n");
    scanf("%d", &angle3);
    if (angle1+angle2+angle3 == 180){
        printf("Triangle is valid");
    }
    else{
        printf("Triangle is not valid");
    }
    
    return 0;
}