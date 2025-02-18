#include <stdio.h>

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2;

    // Taking input from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Assigning addresses to pointers
    ptr1 = &num1;
    ptr2 = &num2;

    // Performing addition using pointers
    sum = *ptr1 + *ptr2;

    // Printing the result
    printf("Sum of %d and %d is: %d\n", *ptr1, *ptr2, sum);

    return 0;
}
