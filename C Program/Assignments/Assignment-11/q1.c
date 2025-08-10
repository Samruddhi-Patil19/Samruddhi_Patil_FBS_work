//Write a program to scan string from user then scan a single character and search it
//in a accepted string.
#include <stdio.h>

void main() {
    char str[100], ch;
    int i, found = 0;

    // Scan string from user
    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Reads until newline

    // Clear buffer before taking a character
    getchar();

    // Scan single character
    printf("Enter a character to search: ");
    scanf("%c", &ch);

    // Search character in string
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            printf("Character '%c' found at position %d\n", ch, i + 1);
            found = 1;
            break;  // Stop at first match
        }
    }

    if (!found) {
        printf("Character '%c' not found in the string.\n", ch);
    }
}
