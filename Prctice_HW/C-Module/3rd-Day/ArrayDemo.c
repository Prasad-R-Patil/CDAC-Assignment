#include<stdio.h>

int main()
{
    int Arr[5] = {11,22,33,44,55};

    printf("\nArr = %d",Arr);

    for(int i=0; i<5; i++)
    {
        printf("\n=============================================================\n");
        printf("\n Arr[%d] = %d",i,Arr[i]);
        printf("\n *(Arr + %d)= %d",i,*(Arr+i));
        printf("\n *(%d + Arr)= %d",i,*(i + Arr));
        printf("\n %d[Arr] = %d",i,i[Arr]);
        printf("\n=============================================================\n");
    }

    return 0;
}