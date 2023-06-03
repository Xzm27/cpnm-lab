// Write a C program to replace a square matrix by its transpose without using a second matrix

#include <stdio.h>

#define SIZE 3

void transposeMatrix(int matrix[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

void displayMatrix(int matrix[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[SIZE][SIZE];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Original matrix:\n");
    displayMatrix(matrix);

    transposeMatrix(matrix);

    printf("Matrix after transpose:\n");
    displayMatrix(matrix);

    return 0;
}
