#include<stdio.h>

int main()
{
    int iNo = 0;

    printf("Enter a number :- ");
    scanf("%d",&iNo);

    printf("Factor is %d :- ",iNo);

    for(int i=2; i<=iNo/2; i++)  // i Also know 1 and self no are factor our no so avoid this print
    {
        if((iNo%i) == 0 )
        {
            printf("%d  ",i);
        }
    }

    return 0;
}