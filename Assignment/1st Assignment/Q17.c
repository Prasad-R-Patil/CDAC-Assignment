#include <stdio.h>

// Recursive function to find the sum of natural numbers
int sumNatural(int n) {
    if (n == 1) 
        return 1; // Base case: sum of first 1 number is 1
    return n + sumNatural(n - 1); // Recursive call
}

int main() {
    int num;

    // Taking user input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 1) {
        printf("Please enter a positive integer.\n");
    } else {
        // Calling recursive function
        int result = sumNatural(num);
        printf("Sum of first %d natural numbers is: %d\n", num, result);
    }

    return 0;
}
