#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

// Function to calculate binomial coefficient (nCr)
int binomialCoeff(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Function to print Pascal's Triangle
void printPascalTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        // Printing spaces for formatting
        for (int j = 0; j < rows - i - 1; j++) {
            printf("  ");
        }

        // Printing values in Pascal's Triangle
        for (int j = 0; j <= i; j++) {
            printf("%4d ", binomialCoeff(i, j));
        }
        printf("\n");
    }
}

int main() {
    int rows;

    // Taking user input for number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Printing Pascal's Triangle
    printPascalTriangle(rows);

    return 0;
}
