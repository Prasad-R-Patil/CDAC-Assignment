#include<stdio.h>
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    printf("Enter Range Table (N from to N)");
    scanf("%d%d",&iNo1,&iNo2);

    for(int i=iNo1; i<=iNo2; i++)
    {
        printf("Table of %d ==> ",i);
        {
            for(int j=1; j<=10; j++)
            {
                int sum = i*j;
                printf("%d  ",sum);
            }

            printf("\n");
            
        }
    }
 return 0;
}