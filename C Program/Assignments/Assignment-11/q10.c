//10. Write a program to check the string is palindrome or not.
#include <stdio.h>

void main() {
    char str[100];
    int i, j, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Find string length
    for (j = 0; str[j] != '\0'; j++);

    j--; // last index

    // Check palindrome
    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");
}
