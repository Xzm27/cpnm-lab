// Write a C program to print the first n numbers of the Fibonacci sequence

#include <stdio.h>

int fib(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	else{
		return fib(n-1) + fib(n-2);
	}
}

int fibIterative(int n){
	int sum=0, first=0, second=1;
	for(int i=1; i<=n; i++){
		if(i<=1){
			sum = i;
		}
		else{
			sum = first + second;
			first = second;
			second = sum;
		}
	}
	return sum;
}

int main(){
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
    printf("Using recursion:\n");
    for(int i=0; i<=num; i++){
		printf("%d ", fib(i));
	}
    printf("\nUsing iteration:\n");
    for(int i=0; i<=num; i++){
		printf("%d ", fibIterative(i));
	}
	return 0;	
}