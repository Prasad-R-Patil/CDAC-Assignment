#include<stdio.h>

int main()
{
    int iNo = 0;

    printf("Enter a value of row and col :- ");
    scanf("%d",&iNo);

    int cnt = 1;
    for(int i=1; i<=iNo; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d ",cnt);
            cnt++;
            if(cnt >9)
            {
                cnt=1;
            }

        }

        printf("\n");
    }

    return 0;
}