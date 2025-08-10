//5. WAP to Count the Number of Vowels in a String
#include <stdio.h>

void main() {
    char str[100];
    int i, count = 0;

    // Input string
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Count vowels
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }

    // Output result
    printf("Number of vowels: %d\n", count);
}
