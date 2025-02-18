#include <stdio.h>

// perform addition
float add(float a, float b) 
{  
    float Add = 0;

    Add = a+b;
       
    return Add;
}

// perform subtraction
float subtract(float a, float b) 
{ 
    float Sub = 0;
    Sub = a-b;
    return Sub;
}

// perform multiplication
float multiply(float a, float b) 
{
    float Multi = 0;
    Multi = a*b;
    return Multi;
}

// perform division
float divide(float a, float b) 
{
    float Divi = 0;
    if (b == 0) 
    {
        printf("Error! Division by zero is not allowed.\n");
        return 0;
    }
    else
    {
        Divi = a/b;
    }
    return Divi;
}

int main() {
    int choice;
    float num1, num2, result;

    do {
        // Display menu
        printf("\n===== MENU =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // If choice is 5, exit the loop
        if (choice == 5) {
            printf("Exiting program...\n");
            break;
        }

        // Taking input for two numbers
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        // Switch case for menu operations
        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 4:
                result = divide(num1, num2);
                if (num2 != 0) {
                    printf("Result: %.2f\n", result);
                }
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    } while (choice != 5);

    return 0;
}
