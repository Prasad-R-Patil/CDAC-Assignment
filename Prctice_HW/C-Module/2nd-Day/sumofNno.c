#include<stdio.h>
int main()
{
    int iNo = 0;
    int iSum = 0;

    printf("Enter the no:- ");
    scanf("%d",&iNo);

    for(int i=1; i<=iNo; i++)
    {
        iSum = iSum+i;
    }
    printf("All No sum is %d",iSum);
 return 0;
}