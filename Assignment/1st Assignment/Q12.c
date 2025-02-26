#include <stdio.h>

// Function to find the largest element in an array
int findLargest(int arr[], int size) {
    int max = arr[0]; // Assume the first element is the largest
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if a larger element is found
        }
    }
    return max;
}

int main() {
    int size;

    // Taking array size input
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Taking array elements input
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element [%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Finding and displaying the largest element
    int largest = findLargest(arr, size);
    printf("\nThe largest element in the array is: %d\n", largest);

    return 0;
}
