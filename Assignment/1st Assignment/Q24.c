#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void countWordsAndChars(char *filename) {
    FILE *file;
    char ch;
    int words = 0, characters = 0;
    int inWord = 0;  // Flag to check if we are inside a word

    // Open the file in read mode
    file = fopen(filename, "r");

    // Check if the file exists
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return;
    }

    printf("The content of the file %s are:\n\n", filename);

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch); // Print file content

        characters++; // Count every character

        // Check if current character is part of a word
        if (isspace(ch) || ch == '\n') {
            if (inWord) {
                words++;  // Count a new word
                inWord = 0;
            }
        } else {
            inWord = 1; // Set flag when inside a word
        }
    }

    // Count last word if file didn't end with whitespace
    if (inWord) {
        words++;
    }

    // Close the file
    fclose(file);

    // Display result
    printf("\n\nThe number of words in %s file is: %d\n", filename, words);
    printf("The number of characters in the file %s is: %d\n", filename, characters);
}

int main() {
    char filename[100];

    // Input file name
    printf("Input the file name to be opened: ");
    scanf("%s", filename);

    // Call function to count words and characters
    countWordsAndChars(filename);

    return 0;
}
