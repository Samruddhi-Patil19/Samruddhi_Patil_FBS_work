//6. WAP to Take in a String and Replace Every Blank Space with special symbol.
#include <stdio.h>

void main() {
    char str[100];
    int i;

    // Input string
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Replace spaces with special symbol
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '#'; // Replace with desired symbol
        }
    }

    // Output result
    printf("Modified string: %s\n", str);
}
