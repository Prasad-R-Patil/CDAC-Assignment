#include <stdio.h>

// calculate factors 
int FindFactors(int num)
 {
    // Displaying factors

    printf("Factors of %d are: ", num);
    for (int i = 1; i <= num; i++) 
    {
        if (num % i == 0) 
        {
            printf("%d ", i);
        }
    }
}

int main() 
{
    int num;

    // input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handling negative numbers
    if (num <= 0) 
    {
        printf("Please enter a positive integer.\n");
    }

    FindFactors(num);

    return 0;
}
