// Write a program to find the range of a set of integers entered by the user. Range is the difference between the smallest and biggest number in the list. 

#include <stdio.h>

#define MAX_SIZE 100

int findRange(int arr[], int size) {
    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max - min;
}

int main() {
    int size, i;
    int arr[MAX_SIZE];
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    printf("Enter the elements:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int range = findRange(arr, size);
    printf("Range: %d\n", range);
    return 0;
}
