//WAP to Form a New String where the First Character and the Last Character have
//been Exchanged
#include <stdio.h>

void main() {
    char str[100];
    int i, len = 0;
    char temp;

    // Input string
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Find length manually
    for (i = 0; str[i] != '\0'; i++) {
        len++;
    }

    // Swap first and last characters if string length > 1
    if (len > 1) {
        temp = str[0];
        str[0] = str[len - 1];
        str[len - 1] = temp;
    }

    // Output modified string
    printf("Modified string: %s\n", str);
}
