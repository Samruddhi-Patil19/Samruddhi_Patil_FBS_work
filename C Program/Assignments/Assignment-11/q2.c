//2. WAP Replace all Occurrences of ‘a’ with $ in a String
#include <stdio.h>

void main() {
    char str[100];
    int i;

    // Input string
    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Read string with spaces

    // Replace all 'a' with '$'
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') {
            str[i] = '$';
        }
    }

    // Output modified string
    printf("Modified string: %s\n", str);
}
