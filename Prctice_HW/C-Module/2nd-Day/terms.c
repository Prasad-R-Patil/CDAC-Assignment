#include<stdio.h>
int main()
{
    int n ,sum=0,term=1,diff=1;

    printf("Enter the no of terms");
    scanf("%d",&n);

    for(int i=0; i<=n; i++)
    {
        sum =sum+term;
        term=term+diff;
        printf("%d  ",term);
        diff++;
    }
    printf("\nSum of terms series : %d ",sum);
 return 0;
}