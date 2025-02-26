#include <stdio.h>

// Function to sort an array using pointer
void sortArray(int *arr, int size) {
    int i, j, temp;
    
    // Using pointer arithmetic for sorting
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (*(arr + i) > *(arr + j)) {  // Swap if current element is greater
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main() {
    int arr[100], n, i;

    // Taking array input from user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", arr + i);  // Using pointer notation to take input
    }

    // Sorting array using pointer function
    sortArray(arr, n);

    // Displaying the sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *(arr + i));  // Using pointer notation to print
    }
    printf("\n");

    return 0;
}
