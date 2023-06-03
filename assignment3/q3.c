// Write a menu-driven program for accepting values in two square matrices of 3x3 dimension and generate their sum, difference and product. 

#include <stdio.h>

#define SIZE 3

void inputMatrix(int matrix[][SIZE]) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matrix[i][j]);
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

void addMatrices(int matrix1[][SIZE], int matrix2[][SIZE], int result[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void subtractMatrices(int matrix1[][SIZE], int matrix2[][SIZE], int result[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void multiplyMatrices(int matrix1[][SIZE], int matrix2[][SIZE], int result[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0;
            for (int k = 0; k < SIZE; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int matrix1[SIZE][SIZE], matrix2[SIZE][SIZE], result[SIZE][SIZE];
    int choice;

    printf("Enter elements for the first matrix:\n");
    inputMatrix(matrix1);

    printf("Enter elements for the second matrix:\n");
    inputMatrix(matrix2);

    printf("Matrix1: \n");
    displayMatrix(matrix1);
    printf("Matrix2: \n");
    displayMatrix(matrix2);


    printf("MENU\n");
    printf("1. Add matrices\n");
    printf("2. Subtract matrices\n");
    printf("3. Multiply matrices\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            addMatrices(matrix1, matrix2, result);
            printf("Sum of matrices:\n");
            displayMatrix(result);
            break;

        case 2:
            subtractMatrices(matrix1, matrix2, result);
            printf("Difference of matrices:\n");
            displayMatrix(result);
            break;

        case 3:
            multiplyMatrices(matrix1, matrix2, result);
            printf("Product of matrices:\n");
            displayMatrix(result);
            break;

        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
