//WAP to Take in Two Strings and Display the Larger String without Using Built-in
//Functions
#include <stdio.h>

void main() {
    char str1[100], str2[100];
    int i, len1 = 0, len2 = 0;

    printf("Enter first string: ");
    scanf("%[^\n]", str1);

    getchar(); // to clear the newline from input buffer

    printf("Enter second string: ");
    scanf("%[^\n]", str2);

    // Calculate length of first string
    for (i = 0; str1[i] != '\0'; i++) {
        len1++;
    }

    // Calculate length of second string
    for (i = 0; str2[i] != '\0'; i++) {
        len2++;
    }

    // Compare and display larger string
    if (len1 > len2) {
        printf("Larger string: %s\n", str1);
    } 
    else if (len2 > len1) {
        printf("Larger string: %s\n", str2);
    } 
    else {
        printf("Both strings are equal in length.\n");
    }
}
