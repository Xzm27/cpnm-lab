// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points
// fall on one straight line.

#include <stdio.h>

int main()
{
    int x1, y1, x2, y2, x3, y3;
    printf("x1: ");
    scanf("%d", &x1);
    printf("y1: ");
    scanf("%d", &y1);
    printf("x2: ");
    scanf("%d", &x2);
    printf("y2: ");
    scanf("%d", &y2);
    printf("x3: ");
    scanf("%d", &x3);
    printf("y3: ");
    scanf("%d", &y3);
    if ((y3 - y2) * (x2 - x1) == (y2 - y1) * (x3 - x2)){
        printf("Points are collinear");
    }
    else{
        printf("Points are not collinear");
    }
    return 0;
}