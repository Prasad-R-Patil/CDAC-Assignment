#include<stdio.h>
int main()
{
     int iNo = 0;
    int cnt = 0;

    printf("Enter a Number to check how many digit in this no:-");
    scanf("%d",&iNo);

    while(iNo != 0)
    {
        iNo = iNo/10;
        cnt++;
    }

    printf("Total no of digit is %d",cnt);
 return 0;
}