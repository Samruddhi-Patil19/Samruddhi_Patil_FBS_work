//Strings user define function
// Function prototypes
char* mystrcpy(char* dest, const char* src);
int mystrlen(const char* str);
int mystrcmp(const char* s1, const char* s2);
char* mystrcat(char* dest, const char* src);
char* mystrncpy(char* dest, const char* src, int n);
char* mystrupper(char* str);
char* mystrlower(char* str);
char* mystrrev(char* str);
char* mystrstr(const char* haystack, const char* needle);
int mystrcasecmp(const char* s1, const char* s2);
char* mystrchr(const char* str, int c);
char* mystrrchr(const char* str, int c);
int mystrncmp(const char* s1, const char* s2, int n);
char* mystrnstr(const char* haystack, const char* needle, int n);
char* mystrncat(char* dest, const char* src, int n);
int mystrncasecmp(const char* s1, const char* s2, int n);

void main() {
    char a[50] = "Hello";
    char b[50] = "World";

    mystrcat(a, b);
    printf("Concat: %s\n", a);

    mystrrev(a);
    printf("Reverse: %s\n", a);

    printf("Compare case-insensitive: %d\n", mystrcasecmp("Test", "test"));
}

// ---- Your function definitions go here ----
// a. mystrcpy
char* mystrcpy(char* dest, const char* src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

// b. mystrlen
int mystrlen(const char* str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// c. mystrcmp
int mystrcmp(const char* s1, const char* s2) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }
    return s1[i] - s2[i];
}

// d. mystrcat
char* mystrcat(char* dest, const char* src) {
    int i = 0, j = 0;
    while (dest[i] != '\0') i++;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++; j++;
    }
    dest[i] = '\0';
    return dest;
}

// e. mystrncpy
char* mystrncpy(char* dest, const char* src, int n) {
    int i;
    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    for (; i < n; i++)
        dest[i] = '\0';
    return dest;
}

// f. mystrupper
char* mystrupper(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
    return str;
}

// g. mystrlower
char* mystrlower(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return str;
}

// h. mystrrev
char* mystrrev(char* str) {
    int i = 0, j = mystrlen(str) - 1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++; j--;
    }
    return str;
}

// i. mystrstr (no NULL)
char* mystrstr(const char* haystack, const char* needle) {
    int i, j;
    if (needle[0] == '\0')
        return (char*)haystack;
    for (i = 0; haystack[i] != '\0'; i++) {
        for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++);
        if (needle[j] == '\0')
            return (char*)&haystack[i];
    }
    return (char*)"";
}

// j. mystrcasecmp
int mystrcasecmp(const char* s1, const char* s2) {
    int i = 0, c1, c2;
    while (s1[i] != '\0' && s2[i] != '\0') {
        c1 = (s1[i] >= 'A' && s1[i] <= 'Z') ? s1[i] + 32 : s1[i];
        c2 = (s2[i] >= 'A' && s2[i] <= 'Z') ? s2[i] + 32 : s2[i];
        if (c1 != c2)
            return c1 - c2;
        i++;
    }
    c1 = (s1[i] >= 'A' && s1[i] <= 'Z') ? s1[i] + 32 : s1[i];
    c2 = (s2[i] >= 'A' && s2[i] <= 'Z') ? s2[i] + 32 : s2[i];
    return c1 - c2;
}

// k. mystrchr (no NULL)
char* mystrchr(const char* str, int c) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == (char)c)
            return (char*)&str[i];
        i++;
    }
    if (c == '\0')
        return (char*)&str[i];
    return (char*)"";
}

// l. mystrrchr (no NULL)
char* mystrrchr(const char* str, int c) {
    int i = 0, lastIndex = -1;
    while (str[i] != '\0') {
        if (str[i] == (char)c)
            lastIndex = i;
        i++;
    }
    if (c == '\0')
        return (char*)&str[i];
    return (lastIndex != -1) ? (char*)&str[lastIndex] : (char*)"";
}

// m. mystrncmp
int mystrncmp(const char* s1, const char* s2, int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
            return s1[i] - s2[i];
    }
    return 0;
}

// n. mystrnstr (no NULL)
char* mystrnstr(const char* haystack, const char* needle, int n) {
    int i, j, len = mystrlen(needle);
    if (len == 0) return (char*)haystack;
    for (i = 0; i + len <= n && haystack[i] != '\0'; i++) {
        for (j = 0; j < len && haystack[i + j] == needle[j]; j++);
        if (j == len) return (char*)&haystack[i];
    }
    return (char*)"";
}

// o. mystrncat
char* mystrncat(char* dest, const char* src, int n) {
    int i = 0, j = 0;
    while (dest[i] != '\0') i++;
    while (j < n && src[j] != '\0') {
        dest[i] = src[j];
        i++; j++;
    }
    dest[i] = '\0';
    return dest;
}

// p. mystrncasecmp
int mystrncasecmp(const char* s1, const char* s2, int n) {
    int i, c1, c2;
    for (i = 0; i < n; i++) {
        c1 = (s1[i] >= 'A' && s1[i] <= 'Z') ? s1[i] + 32 : s1[i];
        c2 = (s2[i] >= 'A' && s2[i] <= 'Z') ? s2[i] + 32 : s2[i];
        if (c1 != c2 || c1 == '\0' || c2 == '\0')
            return c1 - c2;
    }
    return 0;
}
