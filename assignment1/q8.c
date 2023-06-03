// Given the coordinates (x, y) of a center of a circle and its radius, 
// write a program which will determine whether a point lies inside the circle, 
// on the circle or outside the circle. (Hint: #include <math.h>. Use sqrt( ) and pow( ) functions)

#include <stdio.h>
#include <math.h>

int main(){
    int centerx, centery, radius, x, y;
    float distance;
    printf("Enter coordinates of center of circle: \n");
    scanf("%d %d", &centerx, &centery);
    printf("Enter radius of circle: \n");
    scanf("%d", &radius);
    printf("Enter the point: \n");
    scanf("%d %d", &x, &y);
    distance = sqrt(pow((x - centerx), 2) + pow((y - centery), 2));
    if (distance < radius)
    {
        printf("Point is inside the circle\n");
    }
    else if (distance == radius){
        printf("Point is on the circle\n");
    }
    else{
        printf("Point is outside the circle");
    }
    return 0;
}