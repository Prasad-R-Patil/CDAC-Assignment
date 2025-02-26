#include <stdio.h>

int main() {
    int a, b;

    
    printf("Enter 1st numbers: ");
    scanf("%d", &a);

    printf("Enter 2nd numbers: ");
    scanf("%d",&b);

    printf("Value Of a&b is a = %d, b = %d\n", a, b);

    // Swapping without  third variable
    a = a + b;
    b = a - b;
    a = a - b;

   
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
