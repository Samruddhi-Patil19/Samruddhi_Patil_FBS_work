#include <stdio.h>
#include <string.h>

void main()
{
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[100] = "   Hello World   ";
    char str4[50];
    char *ptr;
    int result;

    printf("Original str1: %s\n", str1);
    printf("Original str2: %s\n", str2);

    // 1. strcpy
    strcpy(str4, str1);
    printf("Copy of str1 to str4: %s\n", str4);

    // 2. strcat
    strcat(str1, str2);
    printf("Concatenation of str1 and str2: %s\n", str1);

    // 3. strlen
    printf("Length of str1: %lu\n", strlen(str1));

    // 4. strcmp
    result = strcmp(str1, str2);
    printf("Comparison of str1 and str2: %d\n", result);

    // 5. strncmp
    result = strncmp(str1, str2, 3);
    printf("First 3 characters comparison: %d\n", result);

    // 6. strcpy again
    strcpy(str1, "Hello");

    // 7. strchr
    ptr = strchr(str1, 'e');
    if (ptr != NULL)
        printf("First occurrence of 'e' in str1: %s\n", ptr);

    // 8. strrchr
    ptr = strrchr(str1, 'l');
    if (ptr != NULL)
        printf("Last occurrence of 'l' in str1: %s\n", ptr);

    // 9. strstr
    ptr = strstr(str3, "World");
    if (ptr != NULL)
        printf("Substring 'World' found in str3: %s\n", ptr);

    // 10. strdup (may not work in all compilers, alternative: manually copy)
    char *dup = strdup(str2);
    printf("Duplicate of str2: %s\n", dup);

    // 11. strncat
    strncat(str1, str2, 3);
    printf("Concatenation of first 3 characters of str2 to str1: %s\n", str1);

    // 12. strncpy
    strncpy(str4, str2, 3);
    str4[3] = '\0'; // To ensure null-termination
    printf("First 3 characters of str2 copied to str4: %s\n", str4);

    // 13. strspn
    printf("Length of initial segment in str1 containing only 'Hel': %lu\n", strspn(str1, "Hel"));

    // 14. strcspn
    printf("Length of initial segment in str1 not containing 'oW': %lu\n", strcspn(str1, "oW"));

    // 15. strtok
    char str5[50] = "C,Java,Python";
    char *token = strtok(str5, ",");
    printf("Tokens from str5:\n");
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, ",");
    }

    // 16. memset
    char str6[20];
    memset(str6, '-', 10);
    str6[10] = '\0';
    printf("String after memset: %s\n", str6);

    // 17. memcmp
    printf("Comparison of first 3 bytes of str1 and str2: %d\n", memcmp(str1, str2, 3));

    // 18. memcpy
    char str7[20];
    memcpy(str7, str2, strlen(str2) + 1);
    printf("String after memcpy: %s\n", str7);

    // 19. memmove
    char str8[20] = "ABCDEFG";
    memmove(str8 + 2, str8, 5);
    printf("String after memmove: %s\n", str8);

    // 20. memchr
    ptr = memchr(str2, 'r', strlen(str2));
    if (ptr != NULL)
        printf("Character 'r' found in str2: %s\n", ptr);

    // 21. strcasecmp (non-standard, may require string.h or strings.h on some compilers)
    printf("Case-insensitive comparison of 'Hello' and 'hello': %d\n", strcasecmp("Hello", "hello"));
}
