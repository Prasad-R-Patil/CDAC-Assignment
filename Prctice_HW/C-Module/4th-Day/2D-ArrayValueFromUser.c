#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int Row = 0;
    int Column = 0;

    printf("\n********************************************************************\n");

    //Accept value form user for array rwos and column
    printf("Enter No of Rows in 2D Array :- ");
    scanf("%d",&Row);
    printf("Enter No of Column in 2D Array :- ");
    scanf("%d",&Column);

    printf("\n********************************************************************\n");

    //user value are set in Array
    int Arr[Row][Column];

    //Accept element in array index Wise

    for(int R=0; R<Row; R++)
    {
        for(int C=0; C<Column; C++)
        {
            printf("Arr[%d][%d] = ",R,C);
            scanf("%d",&Arr[R][C]);
        }
    }

    printf("\n********************************************************************\n");


    //Print element in array index Wise

    for(int R=0; R<Row; R++)
    {
        for(int C=0; C<Column; C++)
        {
            //printf("Arr[%d][%d] = %d ",R,C,Arr[R][C]);
            printf("%d  ",Arr[R][C]);
            
        }

        printf("\n");
    }

    printf("\n********************************************************************\n");

    // Deallocate Memory Row wise

    for(int i=0; i<Row; i++)
    {
        free(Arr[i]);
    }

    free(Arr);



    return 0;
}