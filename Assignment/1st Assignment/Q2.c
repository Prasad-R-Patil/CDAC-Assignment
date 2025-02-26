#include <stdio.h>

// calculate factorial 
int findFactorial(int num) {
    int fact = 1, i = num;

   for (int i = num; i > 0; i--)
    {
        fact = fact * i;
    }

    return fact;
}

int main() 
{
    int num;

    // input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handling negative numbers
    if (num < 0) 
    {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else 
    {
        printf("Factorial of %d is: %d\n", num, findFactorial(num));
    }

    return 0;
}
