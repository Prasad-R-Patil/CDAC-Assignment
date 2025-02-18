#include <stdio.h>

int main() {
    int num, shifted;

    // Taking input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Left shifting the number by 2 bits
    shifted = num << 2;

    // Printing the result
    printf("Original number: %d\n", num);
    printf("After shifting left by 2 bits: %d\n", shifted);

    return 0;
}
