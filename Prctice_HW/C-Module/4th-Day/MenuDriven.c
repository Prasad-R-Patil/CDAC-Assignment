#include<stdio.h>


void AcceptArray(int*arr)
{
    for(int i=0; i<10; i++)
    {
        printf("\nEnter Element Arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
}

void Display(int*arr)
{
    for(int i=0; i<10; i++)
    {
        printf("\n Arr[%d] = %d",i,arr[i]);
        
    }
}

int Sum(int *p)
{
    int sum = 0;

    for(int i=0; i<10; i++)
    {
        sum = sum + p[i];
    }
    return sum;
}

void PrintEven(int *ptr)
{
    for(int i=0; i<10; i++)
    {
        if((ptr[i] % 2) == 0)
        {
            printf("%d  ",ptr[i]);
        }
    }
}

int MAX(int *b)
{
    int max = b[0];

    for(int i=0; i<10; i++)
    {
        if(b[i]>max)
        {
            max = b[i];
        }
    }
    return max;
}

int MIN(int *s)
{
    int min = s[0];

    for(int i=0; i<10; i++)
    {
        if(s[i]<min)
        {
            min = s[i];
        }
    }
    return min;
}

int isPrime(int num) 
{
    if (num < 2) return 0; 

    for (int i = 2; i<num; i++) 
    { 
        if (num % i == 0) 
        {
            return 0; 
        }
    }
    return 1; 
}

void PrimeNumber(int *pm)
{
    for(int i=0; i<10; i++)
    {
        if(isPrime(pm[i]))
        {
            printf(" %d ",pm[i]);
        }
    
    }

}

int SumPrimeNo(int *p)
{
    int sum = 0;

    for(int i=0; i<10; i++)
    {
        if(isPrime(p[i]))
        {
            sum = sum + p[i];
        }
    }

    return sum;
}

int main()
{
    int arr[10],ch;

    do{
        printf("\n\n==================================================================================\n\n");
        printf("\n 1. Accept value for Array Element");
        printf("\n 2. Display Array of Element");
        printf("\n 3. Sum of Array Element");
        printf("\n 4. Print All Even No from Array");
        printf("\n 5. Max No in Array");
        printf("\n 6. Min No in Array");
        printf("\n 7. Print Prime no n Array");
        printf("\n 8. Sum of all Prime No");
        printf("\n 9. Exit");
        printf("\n\n==================================================================================\n\n");

        printf("\n Enter Your Choice (1 - 9) ==>  ");
        scanf("%d",&ch);
        printf("\n\n==================================================================================\n\n");

        if((ch>=1) && (ch>=9))
        {
            printf("\n\n==================================================================================\n\n");
            printf("Enter Valid Choise (Enter 1 - 9 )");
            printf("\n\n==================================================================================\n\n");
            continue;
        }

        switch(ch)
        {
            case 1:
            {
                AcceptArray(arr);
                break;
            }
            case 2:
            {
                Display(arr);
                break;
            }
            case 3:
            {
                int sum = Sum(arr);
                printf("Sum = %d ",sum);
                break;
            }
            case 4:
            {
                PrintEven(arr);
                break;
            }
            case 5:
            {
                int max = MAX(arr);
                printf("MAX no is = %d ",max);
                break;
            }
            case 6:
            {
                int min = MIN(arr);
                printf("MIN no is = %d ",min);
                break;
            }
            case 7:
            {
                PrimeNumber(arr);
                break;
            }
            case 8:
            {
                int spn = SumPrimeNo(arr);
                printf(" Sum prime no is = %d ",spn);
                break;
            }
            case 9:
            {
                break;
            }
           
        }
    }while(ch != 9);
}