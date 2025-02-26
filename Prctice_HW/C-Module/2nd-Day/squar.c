#include<stdio.h>
int main()
{
    int iNo = 0;

    printf("Enter the Number :- ");
    scanf("%d", &iNo);

    for(int i=1; i<=iNo; i++)
    {
        printf("%d  ",i*i);
    }
 return 0;
}