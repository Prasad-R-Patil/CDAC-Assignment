#include<stdio.h>

int main()
{
    int iNo = 0;
    int flag = 0;

    printf("Enter a number :-");
    scanf("%d",&iNo);

    for(int i=2; i<iNo/2;i++)
    {
        if((iNo%i)==0)
        {
            flag = 1;
        }
    }

    if(flag == 1)
    {
        printf("%d => It is Not prime no ",iNo);
    }
    else
    {
        printf("%d => It is prime no ",iNo);
    }

    return 0;
}