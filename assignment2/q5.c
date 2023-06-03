// Write a C program to print all the armstrong numbers between 1 and 500

#include <stdio.h>

int checkArmstrong(int a){
	int rem, sum=0, temp;
	temp = a;
	while(a>0){
		rem = a%10;
		sum = sum + (rem*rem*rem);
		a = a/10;
	}
	if(temp==sum){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	for(int i=1; i<=500; i++){
		if(checkArmstrong(i) == 1){
			printf("%d is an amstrong number\n", i);
		}
	}
}