#include<stdio.h>

int main()
{

    int arr[3][3] = {{11,12,13},{21,22,23},{31,32,33}};

    for(int i=0; i<3;i++)
    {
        for(int j=0; j<3; j++)
        {
            //printf("arr[%d][%d] = %d   ",i,j,arr[i][j]);    // print element with element position
            printf("%d   ",arr[i][j]);                       // print only element
        }
        printf("\n");
    }



    return 0;
}