#include<stdio.h>
int main()
{
     int iNo = 0;
    int sum = 0;

    printf("Enter a Number :-");
    scanf("%d",&iNo);

    while(iNo != 0)
    {
        int X = iNo%10;
        sum = sum+X;
        iNo = iNo/10;

        
    }

    printf("Total no of digit sum is %d",sum);
 return 0;
}