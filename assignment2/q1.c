// Write a C program to print all the prime numbers between 1 to 100

#include <stdio.h>

int checkPrime(int num){
    int count = 0;
    int i = 2;
    while (i <= num / 2){
        if (num % i == 0){
            count++;
            break;
        }
        i++;
    }
    return count;
}

void main(){
    int a = 1;
    printf("Prime numbers between 1 and 100 are:\n");
    while (a <= 100){
        if (checkPrime(a) == 0 && a != 1){
            printf("%d ", a);
        }
        a++;
    }
}