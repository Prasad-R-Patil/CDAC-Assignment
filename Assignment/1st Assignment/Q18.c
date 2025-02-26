#include <stdio.h>

int main() {
    FILE *file;
    char filename[50], line[200];
    int numLines;

    // Asking for file name
    printf("Input the file name to be opened: ");
    scanf("%s", filename);

    // Open the file in append mode
    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening the file!\n");
        return 1;
    }

    // Taking input for number of lines to write
    printf("Input the number of lines to be written: ");
    scanf("%d", &numLines);
    getchar(); // To consume the newline character after scanf

    printf("Enter the lines:\n");

    // Writing multiple lines to the file
    for (int i = 0; i < numLines; i++) {
        fgets(line, sizeof(line), stdin);
        fprintf(file, "%s", line);
    }

    // Close the file
    fclose(file);

    // Reopen file to read and display updated content
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening the file for reading!\n");
        return 1;
    }

    printf("\nThe content of the file %s is:\n", filename);

    // Displaying the file content
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(file);

    return 0;
}
