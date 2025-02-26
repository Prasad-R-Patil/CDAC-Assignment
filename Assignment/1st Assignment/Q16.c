#include <stdio.h>

// Recursive function to find GCD
int gcd(int a, int b) {
    if (b == 0)
        return a; // Base case: when b becomes 0, a is the GCD
    return gcd(b, a % b); // Recursive call
}

int main() {
    int num1, num2;

    // Taking input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calling recursive GCD function
    int result = gcd(num1, num2);

    // Displaying the GCD
    printf("GCD of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
