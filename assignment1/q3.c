// Input two integer numbers and divide the larger number by the smaller one. 
// Then display the result using printf() function as a fractional number first and then as a real valued number. 
// (Example: 9 divided by 5 shall yield “ 4/5” and “1.8” respectively. )

#include <stdio.h>

int main()
{
    int val1, val2;
    float result;
    printf("Enter the first value:\n");
    scanf("%d", &val1);
    printf("Enter the second value:\n");
    scanf("%d", &val2);
    if (val1 > val2)
    {
        result = (float)val1 / val2;
    }
    else
    {
        result = (float)val2 / val1;
    }
    printf("The value of %d/%d is %.2f", val1, val2, result);
    return 0;
}