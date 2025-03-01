#include<stdio.h>

void calculate(int n1 , int n2 , int*A , int*S , int*M) 
{
    *A = n1 + n2;
    *S = n1 - n2;
    *M = n1 * n2;
}

int main()
{
    int n1,n2,sum,sub,multi;

    printf("Enter Value (N1 and N2) :-   ");
    scanf("%d%d",&n1,&n2);

    calculate(n1,n2,&sum,&sub,&multi);

    printf("\n Sum = %d ",sum);
    printf("\n Sub = %d ",sub);
    printf("\n Multi = %d ",multi);


    return 0;

}