// Write a C program which accepts basic salary as input and prints the gross salary, which is the sum of the basic, dearness allowance (60% of basic salary), 
// and house rent allowance (15% of basic salary).


#include <stdio.h>

int main(){
    int basic_salary;
    float total_salary;
    const float da = 0.6;
    const float ra = 0.15;
    printf("Enter basic salary:\n");
    scanf("%d", &basic_salary);
    total_salary = basic_salary + basic_salary * da + basic_salary * ra;
    printf("Total salary after adding %.2f percent dearness allowance and %.2f percent rental allowance on the basic salary of %d is %.2f", da * 100, ra * 100, basic_salary, total_salary);
    return 0;
}