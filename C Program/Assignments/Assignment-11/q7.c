//7. WAP to Remove the Characters of Odd Index Values in a String
#include <stdio.h>

void main() {
    char str[100], newStr[100];
    int i, j = 0;

    // Input string
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Copy only even index characters
    for (i = 0; str[i] != '\0'; i++) {
        if (i % 2 == 0) {   // Keep only even indexes
            newStr[j] = str[i];
            j++;
        }
    }
    newStr[j] = '\0'; // End string

    // Output result
    printf("String after removing odd index characters: %s\n", newStr);
}
