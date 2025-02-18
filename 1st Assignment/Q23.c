#include <stdio.h>
#include <stdlib.h>

// Structure to store employee details
struct Employee {
    int empID;
    char name[50];
    char designation[50];
    float salary;
};

int main() {
    struct Employee *emp;
    int n;

    // Taking number of employees from user
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Dynamically allocating memory for n employees
    emp = (struct Employee *)malloc(n * sizeof(struct Employee));

    if (emp == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input employee details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("EmpID: ");
        scanf("%d", &(emp[i].empID));
        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);  // Reads string with spaces
        printf("Designation: ");
        scanf(" %[^\n]", emp[i].designation);
        printf("Salary: ");
        scanf("%f", &(emp[i].salary));
    }

    // Display employee details
    printf("\nEmployee Information:\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("EmpID: %d\n", emp[i].empID);
        printf("Name: %s\n", emp[i].name);
        printf("Designation: %s\n", emp[i].designation);
        printf("Salary: %.2f\n", emp[i].salary);
    }

    // Free dynamically allocated memory
    free(emp);

    return 0;
}
