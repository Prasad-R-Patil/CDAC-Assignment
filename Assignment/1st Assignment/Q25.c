#include <stdio.h>

// Structure to store student details
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    struct Student student;

    // Taking student details as input
    printf("Enter Student Roll Number: ");
    scanf("%d", &student.rollNumber);
    
    printf("Enter Student Name: ");
    scanf(" %[^\n]", student.name); // Reads string with spaces
    
    printf("Enter Marks: ");
    scanf("%f", &student.marks);

    // Displaying student details
    
    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
