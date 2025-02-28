#include<stdio.h>

void DisplayArr(int *ptr)
{
    printf("\n=====================================================\n");
    for(int i=0; i<5; i++)
    {
        printf("\n Arr[%d] = %d",i,ptr[i]);
    }
    printf("\n=====================================================\n");

    ptr = ptr + 3;

    printf("\n  %d",ptr);
    printf("\n  %d",ptr[-2]);
    printf("\n=====================================================\n");



}
int main()
{
    int Arr[5] = {11,22,33,44,55};
    
    printf("\n=====================================================\n");

    printf("\n  %d",Arr);

    DisplayArr(Arr);

   

    
return 0;


}