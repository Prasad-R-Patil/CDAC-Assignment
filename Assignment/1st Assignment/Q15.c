#include <stdio.h>
#include <math.h>

// Function to check if a number is Prime
int isPrime(int num) {
    if (num < 2) return 0; // Prime numbers start from 2
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // If divisible, not a prime
    }
    return 1; // Prime number
}

// Function to check if a number is an Armstrong Number
int isArmstrong(int num) {
    int original = num, sum = 0, digits = 0;

    // Count number of digits
    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // Calculate sum of each digit raised to the power of total digits
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return (sum == original); // Return 1 if Armstrong, else 0
}

int main() {
    int num;

    // Taking user input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Checking for Prime and Armstrong
    if (isPrime(num))
        printf("%d is a Prime Number.\n", num);
    else
        printf("%d is NOT a Prime Number.\n", num);

    if (isArmstrong(num))
        printf("%d is an Armstrong Number.\n", num);
    else
        printf("%d is NOT an Armstrong Number.\n", num);

    return 0;
}
