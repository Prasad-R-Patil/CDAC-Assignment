#include<stdio.h>
int main()
{
    int iNo = 0;
    int result = 0;

    printf("Enter a number :- ");
    scanf("%d",&iNo);

    for(int i=1; i<=10; i++)
    {
        result = iNo*i;
        printf("%d\n",result);
    }
   
 return 0;
}