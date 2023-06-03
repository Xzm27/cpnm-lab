// Write a C program to find the transpose of a matrix

#include <stdio.h>

#define ROWS 3
#define COLS 3

void transposeMatrix(int matrix[][COLS], int transpose[][ROWS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

void displayMatrix(int matrix[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[ROWS][COLS];
    int transpose[COLS][ROWS];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    transposeMatrix(matrix, transpose);

    printf("Original matrix:\n");
    displayMatrix(matrix);

    printf("Transpose of the matrix:\n");
    displayMatrix(transpose);

    return 0;
}
