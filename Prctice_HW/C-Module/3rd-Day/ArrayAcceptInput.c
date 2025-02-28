#include<stdio.h>

int main()
{

    int iNo = 0;

    printf("Enter a No of Element of Array :- ");
    scanf("%d",&iNo);

    int Arr[iNo];
    printf("Enter Data your Array :- ");
    for(int i=0; i<iNo; i++)
    {
        scanf("%d",&Arr[i]);
    }

    printf("Your Entered Data :- \n");
    for(int i=0; i<iNo; i++)
    {
        printf("\nArr[%d] = %d",i,Arr[i]);
    }

}