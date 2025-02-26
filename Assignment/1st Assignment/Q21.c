#include <stdio.h>

// Function to compute the sum using a pointer
int sumArray(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);  // Using pointer arithmetic to access elements
    }
    return sum;
}

int main() {
    int arr[100], n;

    // Taking array input from user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);  // Using pointer notation for input
    }

    // Compute and print sum
    printf("The sum of all elements is: %d\n", sumArray(arr, n));

    return 0;
}
