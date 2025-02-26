#include<stdio.h>
int main()
{
    int iNo = 0;
    int Factorial = 1;

    printf("Enter the no :- ");
    scanf("%d",&iNo);

    for(int i=1; i<=iNo; i++)
    {
        Factorial = Factorial*i;
    }
    printf("%d Factorial is %d",iNo,Factorial);
 return 0;
}