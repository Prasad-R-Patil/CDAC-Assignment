#include<stdio.h>
int main()
{
    int n =0;
    int sum=0;
    printf("Enter the range of no :- ");
    scanf("%d",&n);

    for(int i=0; i<=n; i++)
    {
        if((i%2)==0)
        {
            printf("%d  ",i);
            sum=sum+i;
        }
        
    }
    printf("\n All Even no Sum = %d",sum);
 return 0;
}