#include<stdio.h>

int main()
{
    int iNo = 0;

    printf("Enter a value of row and col :- ");
    scanf("%d",&iNo);

    for(int i=1; i<=iNo; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("* ");

        }

        printf("\n");
    }

    return 0;
}