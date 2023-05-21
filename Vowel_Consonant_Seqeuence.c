#include <stdio.h>
#include <string.h>

// Function to check if a character is a vowel
int isVowel(char ch) {
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    int numVowels = sizeof(vowels) / sizeof(vowels[0]);
    for (int i = 0; i < numVowels; i++) {
        if (ch == vowels[i]) {
            return 1;
        }
    }
    return 0;
}

// Function to generate the vowel-consonant sequence
void generateVCSequence(char *str) {
    int length = strlen(str);
    char sequence[length + 1];
    int seqIndex = 0;

    int i = 0;
    while (i < length) {
        // If current character is a consonant
        if (!isVowel(str[i])) {
            sequence[seqIndex++] = 'C';
            // Skip all consecutive consonants
            while (i < length && !isVowel(str[i])) {
                i++;
            }
        }
        // If current character is a vowel
        else {
            sequence[seqIndex++] = 'V';
            // Skip all consecutive vowels
            while (i < length && isVowel(str[i])) {
                i++;
            }
        }
    }
    sequence[seqIndex] = NULL;

    printf("%s
", sequence);
}

int main() {
    char inputString[100];
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "
")] = NULL;

    generateVCSequence(inputString);

    return 0;
}
