#include <stdio.h>

int main() {
    int iNo, rem, sum;

    printf("Enter the No: ");
    scanf("%d", &iNo);

    do {
        sum = 0;  // Reset sum for each iteration
        while (iNo > 0) {
            rem = iNo % 10;
            sum = sum + rem;
            printf("Digit = %d\n", sum);
            iNo = iNo / 10;
        }
        iNo = sum; // Update iNo with the new sum
    } while (sum > 9); // Repeat until sum is a single digit

    printf("Digital Root = %d\n", sum);

    return 0;
}
