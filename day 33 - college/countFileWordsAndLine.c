#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int lines = 0, words = 0;

    // // Get the filename from the user
    // printf("Enter the filename: ");
    // fgets(filename,sizeof(filename),stdin);

    // Open the file in read mode
    file = fopen("wordCountFolder.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Process the file character by character
    while ((ch = fgetc(file)) != EOF) {
        if(ch == '\n'){
            lines++;
        }
        if (ch == ' ' || ch == '\n') {
            words++;
        }
        
    }

    // Close the file
    fclose(file);

    // Print the results
    printf("Number of lines: %d\n", lines);
    printf("Number of words: %d\n", words);

    return 0;
}
