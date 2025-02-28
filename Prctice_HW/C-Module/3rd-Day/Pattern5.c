#include <stdio.h>

int main() 
{
    int iNo = 0;

    printf("Enter a value of row and col :- ");
    scanf("%d",&iNo);

    for (int i = iNo; i >= 1; i--) 
    {  
        for (int j = i; j <= iNo; j++) 
        {  
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
