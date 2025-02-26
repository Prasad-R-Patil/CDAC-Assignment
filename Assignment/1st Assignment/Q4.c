

/*
    *
   ***
  *****
 *******
*********


*/





#include <stdio.h>

int main()
 {
    int rows = 0;
    printf("Enter No of Row :- ");
    scanf("%d",&rows); 

    for (int i = 1; i <= rows; i++) 
    {
        for(int j = 1; j<= rows; j++)
        {
            if(rows+1 > (i+j))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
           
        }

         for(int k = 1; k<=rows; k++)
            {
               if(i > k)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            
            }
       printf("\n");
    }

   

    return 0;
}
