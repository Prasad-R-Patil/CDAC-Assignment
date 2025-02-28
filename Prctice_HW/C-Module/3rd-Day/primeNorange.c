#include <stdio.h>

int main() 
{
    int start, end;
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are: ", start, end);

    for (int num = start; num <= end; num++) 
    {
        if (num < 2) continue; // Skip numbers less than 2
        int isPrime = 1; // Assume the number is prime

        for (int i = 2; i < num; i++) 
        { 
            if (num % i == 0) {
                isPrime = 0; // Not a prime number
                break;
            }
        }

        if (isPrime) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}
