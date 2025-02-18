#include <stdio.h>

// Function to take array input from the user
void inputArray(int arr[], int size) {
    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element [%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Function to calculate the sum of array elements
int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to calculate the average of array elements
float calculateAverage(int sum, int size) {
    return (float)sum / size;
}

int main() {
    int arr[10], sum;
    float average;

    // Function calls
    inputArray(arr, 10);
    sum = calculateSum(arr, 10);
    average = calculateAverage(sum, 10);

    // Display results
    printf("\nSum of array elements: %d\n", sum);
    printf("Average of array elements: %.2f\n", average);

    return 0;
}
