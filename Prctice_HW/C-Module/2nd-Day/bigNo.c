#include<stdio.h>
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iNo3 = 0;

    int iBig = 0;
    printf("Enter the 3 no :- ");
    scanf("%d%d%d",&iNo1,&iNo2,&iNo3);

    if((iNo1>=iNo2) && (iNo1>=iNo2))
    {
        
            iBig = iNo1;
        
    }
    else if((iNo2>=iNo1) && (iNo2>=iNo3))
    {
        
            iBig=iNo2;
        
    }
    else
    {
        iBig=iNo3;
    }
    printf("The Big No in A= %d , B= %d , C= %d is %d ",iNo1 , iNo2 , iNo3 , iBig);
 return 0;
}