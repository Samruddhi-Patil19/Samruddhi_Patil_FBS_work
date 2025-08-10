//8. WAP to Calculate the Number of Words Present in a String
#include <stdio.h>

void main() {
    char str[200];
    int i, words = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Count words
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {
            words++;
        }
    }

    // Add 1 for the last word (if string is not empty)
    if (str[0] != '\0')
        words++;

    printf("Number of words: %d\n", words);
}
