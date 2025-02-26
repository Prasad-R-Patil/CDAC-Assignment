#include <stdio.h>

// Function to calculate factorial
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate the sum of the series
double sumSeries(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (double)factorial(i) / i;
    }
    return sum;
}

int main() {
    int n = 5;  // Given series is up to 5

    // Calling function to calculate the sum of the series
    double result = sumSeries(n);

    // Display result
    printf("The sum of the series is: %.0f\n", result);

    return 0;
}
