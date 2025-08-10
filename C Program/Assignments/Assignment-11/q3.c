//3. WAP to Remove the nth Index Character from a Non-Empty String
#include <stdio.h>

void main() {
    char str[100];
    int n, i;

    // Input string
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Input index to remove
    printf("Enter index to remove (starting from 0): ");
    scanf("%d", &n);

    // Shift characters left from index n
    for (i = n; str[i] != '\0'; i++) {
        str[i] = str[i + 1];
    }

    // Output modified string
    printf("String after removing index %d: %s\n", n, str);
}
