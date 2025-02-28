#include <stdio.h>

int main() 
{
    int iNo = 0;

    printf("Enter a value of row and col :- ");
    scanf("%d",&iNo);

    for (int i = iNo; i >= 1; i--) 
    {  
        for (int j = iNo; j >= i; j--) 
        {  
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
