#include<stdio.h>

int main()
{

    int iNo = 0;

    printf("Enter a No of Element of Array :- ");
    scanf("%d",&iNo);

    int Arr[iNo];
    printf("Enter Data your Array :- ");
    int i;
    for(i=0; i<iNo; i++)
    {
        scanf("%d",&Arr[i]);
    }

    printf("Your Entered Data :- ");
    
    int j;
    
    for(j=0; j<iNo; j++)
    {
        printf("\nArr[%d] = %d",i,Arr[j]);
    }
    
   return 0;
}