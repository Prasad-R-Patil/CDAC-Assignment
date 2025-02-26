#include <stdio.h>

int main() {
    // Given marks of 50 students
    int marks[] = {43, 65, 51, 27, 79, 11, 56, 61, 82, 9,
                   25, 36, 7, 49, 55, 63, 74, 81, 49, 37,
                   40, 49, 16, 75, 87, 91, 33, 24, 58, 78,
                   65, 56, 76, 67, 45, 54, 36, 63, 12, 21,
                   73, 49, 51, 19, 39, 49, 68, 93, 85, 59};
                   
    int rangeCount[10] = {0}; // Array to store count for each range

    // Counting students in each range
    for (int i = 0; i < 50; i++) {
        int index = marks[i] / 10; // Determine the index in rangeCount array
        if (index > 9) { 
            index = 9;  // To handle marks 100 (if present), categorize as 90-100
        }
        rangeCount[index]++;
    }

    // Displaying the results
    printf("Marks Range | Number of Students\n");
    printf("-----------------------------\n");
    for (int i = 0; i < 10; i++) {
        printf("%2d - %3d  | %d\n", i * 10, i * 10 + 9, rangeCount[i]);
    }

    return 0;
}
