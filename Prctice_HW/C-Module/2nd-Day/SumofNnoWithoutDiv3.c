#include<stdio.h>
int main()
{

    int n,sum=0;

    printf("Enter Range");
    scanf("%d",&n);

    for(int i=0; i<=n; i++)
    {
        if((i%3)==0)
        {
            continue;
        }

        printf("%d ",i);
        sum = sum+i;
    }

    printf("\nSum is ==> %d",sum);

 return 0;
}