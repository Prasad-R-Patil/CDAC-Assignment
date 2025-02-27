#include<stdio.h>


int main()
{
    int iNo1 = 10;
    int iNo2 = 30;

    int *ptr = &iNo1;

    printf("\niNo1 is %d ",iNo1);
    printf("\niNo2 is %d ",iNo2);
    printf("\nptr is %d ",*ptr);

    printf("\n===================================================\n");

    printf("\nAddress iNo1 is %d ",&iNo1);
    printf("\nAddress iNo2 is %d ",&iNo2);
    printf("\nAddress *ptr is %d ",&*ptr);
    printf("\nAddress ptr is %d ",&ptr);


    printf("\n===================================================\n");

    ptr = ptr+1;
    printf("\nptr is %d ",*ptr);
    printf("\nAddress *ptr is %d ",&*ptr);
    printf("\nAddress ptr is %d ",&ptr);

    return 0;

}