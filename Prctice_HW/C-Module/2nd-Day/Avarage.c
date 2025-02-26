#include<stdio.h>
int main()
{
    int a,b,c;

    
    while(1)
    {
        printf("\nEnter 3 no");
        scanf("%d%d%d",&a,&b,&c);

        if((a==0) && (b==0) && (c==0))
        {
            break;
        }
        else
        {
            int sum = ((a+b+c)/3);

            printf("\nAvarage is %d",sum);

        }

        
    }

 return 0;
}