#include <stdio.h>
#include <string.h>
#include <ctype.h> // For isalpha function

int main() {
    char sentence[30];
    int spaceCount = 0, vowelCount = 0, consonantCount = 0;

    printf("Enter any sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ') {
            spaceCount++;
        } 
        else if (strchr("AEIOUaeiou", sentence[i]) != NULL) { // Check if character is in the vowel list
            vowelCount++;
        } 
        else if (isalpha(sentence[i])) { // Check if the character is a letter
            consonantCount++;
        }
    }

    printf("Total number of spaces: %d\n", spaceCount);
    printf("Total number of vowels: %d\n", vowelCount);
    printf("Total number of consonants: %d\n", consonantCount);

    return 0;
}
