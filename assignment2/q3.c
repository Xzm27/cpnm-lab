// Write a C program which accepts n integers and displays the count of positives, negatives and zeros entered

#include <stdio.h>

int main(){
	int num, inti, pos=0, neg=0, zeros=0;
	printf("Enter number of integers: ");
	scanf("%d", &num);
	for(int i=0;i<num;i++){
		printf("Enter integer: ");
		scanf("%d", &inti);
		if(inti > 0){
			pos++;
		}
		else if(inti < 0){
			neg++;
		}
		else{
			zeros++;
		}
	}
	printf("Number of positive numbers is %d\nNumber of negative numbers is %d\nNumber of zeros is %d\n", pos, neg,zeros);
}