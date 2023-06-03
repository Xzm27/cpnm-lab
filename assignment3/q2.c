// Write a program in C to read n number of values in an array. 
// After that, count the total number of duplicate elements in that array. 
// Then copy the elements except the duplicate elements of that array into another array and display this array in reverse order.

#include <stdio.h>

int main(){
	int arr[100], arr2[100], i, j=0, k, n, count=0;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	printf("Enter value\n");
	for (int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	int indexCounter = 0;
	for (i = 0; i < n; i++)
	{
		int isDuplicate = 0;
		for (j = 0; j < indexCounter; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
				isDuplicate = 1;
			}
		}
		if (isDuplicate==0)
		{
			arr2[indexCounter] = arr[i];
			indexCounter++;
		}
	}
	printf("Number of duplicates is %d\n", count);
	printf("Array without duplicates\n");
	for (int i = 0; i < indexCounter; i++){
		printf("%d ", arr2[i]);
	}
}