#include <stdio.h>

// Function to calculate string length using a pointer
int stringLength(char *ptr) {
    int length = 0;
    while (*ptr != '\0') { // Loop until the null character is found
        length++;
        ptr++; // Move the pointer to the next character
    }
    return length;
}

int main() {
    char str[100];

    // Taking user input
    printf("Input a string: ");
    scanf("%s", str);  // Reads input (without spaces)

    // Calling function and printing result
    printf("The length of the given string %s is: %d\n", str, stringLength(str));

    return 0;
}
