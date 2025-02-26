#include<stdio.h>
int main()
{
    int x=8;
    int y=8;

    int z = x++ + ++y;

    printf("sum is %d",z);
 return 0;
}