#include <stdio.h>

// Function to remove duplicate elements
int removeDuplicates(int arr[], int size) {
    int newSize = 0; // New size after removing duplicates
    int unique[size]; // Temporary array to store unique elements

    for (int i = 0; i < size; i++) {
        int isDuplicate = 0;

        // Check if the element is already in the unique array
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }

        // If not a duplicate, add it to the unique array
        if (!isDuplicate) {
            unique[newSize] = arr[i];
            newSize++;
        }
    }

    // Copy unique elements back to the original array
    for (int i = 0; i < newSize; i++) {
        arr[i] = unique[i];
    }

    return newSize; // Return the new size of the array
}

int main() {
    int size;

    // Taking input for the array size
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Taking input for array elements
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element [%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Removing duplicates
    int newSize = removeDuplicates(arr, size);

    // Displaying the array after removing duplicates
    printf("\nArray after removing duplicates: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
