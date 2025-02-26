#include<stdio.h>
int main()
{
     int iNo = 0;
     int rev = 0;

    printf("Enter a Number :-");
    scanf("%d",&iNo);

    int temp = iNo;

    while(iNo != 0)
    {
        int rem = iNo%10;
        rev = rev*10+rem;
        iNo = iNo/10;

        
    }

    printf("your no is %d and revers no is %d",temp,rev);
 return 0;
}