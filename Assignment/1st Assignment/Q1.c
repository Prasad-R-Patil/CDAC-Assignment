#include <stdio.h>

int Length(char str[])
{
    int i=0;
    int Len = 0;
    // Finding length manually

    while (str[i] != '\0') {
        Len++;
        i++;
    }

    return Len;
}


void ReversString(char str[])
{
    int Len = Length(str);
    char rev[100];
    // Reversing the string 

    for (int i = 0; i < Len; i++) {
        rev[i] = str[Len - i - 1];
    }
    rev[Len] = '\0'; 

    // Printing the reversed string
    printf("Reversed string: %s\n", rev);
}

int main() 
{

    char str[100];

    // input from user
    printf("Enter a string: ");
    scanf("%s", str);  

    ReversString(str);

  
    

    return 0;
}
