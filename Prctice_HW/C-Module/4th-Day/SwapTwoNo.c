#include<stdio.h>

void SwapNumber(int*n1 , int*n2  ) 
{
    // int temp = *n1;
    //       *n1 = *n2;
    //       *n2 = temp;

    *n1 = *n1 + *n2;
    *n2 = *n1 - *n2;
    *n1 = *n1 - *n2;
    
}

int main()
{
    int n1,n2;

    printf("Enter Value (N1 and N2) :-   ");
    scanf("%d%d",&n1,&n2);

    printf("\nThe  no is %d  %d",n1,n2);

    SwapNumber(&n1,&n2);

    printf("\nThe Swpad no is %d  %d",n1,n2);


    return 0;

}