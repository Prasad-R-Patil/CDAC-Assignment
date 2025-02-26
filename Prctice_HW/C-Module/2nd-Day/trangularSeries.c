#include<stdio.h>

int main()
{
    int iNo = 0;
    

    printf("Enter No limits :- ");
    scanf("%d",&iNo);

    for(int i=1; i<=iNo; i++)
    {
        int res = i*(i+1)/2;

        printf("%d  ",res);
        
    }

    return 0;
}