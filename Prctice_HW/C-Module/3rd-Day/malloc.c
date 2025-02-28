#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iNo=0;
    
    int *ptr;
    ptr = malloc(40);
    
    printf(" Address of iNo =%d",&iNo);
    printf(" Address of ptr =%d",ptr);
    
    return 0;
}
    
    
    
