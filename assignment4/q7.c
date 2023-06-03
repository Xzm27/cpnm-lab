// Write a program in C to store n numbers in an array and print the elements using pointers. Also
// compute the sum of all elements of that array using pointers.

#include <stdio.h>

int main() {
    int n, i;
    int numbers[100];
    int *ptr;
    int sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Elements in the array:\n");
    ptr = numbers;
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    ptr = numbers;
    for (i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    printf("Sum of all elements: %d\n", sum);

    return 0;
}

