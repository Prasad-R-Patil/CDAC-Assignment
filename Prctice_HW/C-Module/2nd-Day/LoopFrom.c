#include<stdio.h>

int main()
{
    int n=0;
    printf("enter no");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        if(((i%3)==0) && ((i%5)==0))
        {
            printf("\nHello World = %d",i);
        }
        else if ((i%5) == 0)
        {
            printf("\nHello = %d",i);
        }
        else if ((i%3) == 0)
        {
            printf("\nhii = %d",i);
        }
    }

    return 0;

}