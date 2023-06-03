// Write a C program which accepts ten integers from the user and prints them in ascending order.
// Use an array to store the integers.

#include <stdio.h>

#define SIZE 10

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[SIZE];

    printf("Enter ten integers:\n");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    sortArray(arr, SIZE);

    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
