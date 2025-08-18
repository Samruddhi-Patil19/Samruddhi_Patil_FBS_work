#include <stdio.h>

// 1. Structure Definition
struct Student {
    int rollNo;
    char name[20];
    float marks;
};

// Function prototypes
void storeByValue(struct Student s);
void storeByAddress(struct Student *s);
void storeArray(struct Student s[], int n);
void displayByValue(struct Student s);
void displayByAddress(struct Student *s);
void displayArray(struct Student s[], int n);

void main() {
    struct Student s1, s2;
    struct Student arr[3];

    // Pass by value
    printf("\n--- Pass by Value ---\n");
    storeByValue(s1);  // won't update outside
    displayByValue(s1);

    // Pass by address
    printf("\n--- Pass by Address ---\n");
    storeByAddress(&s2);
    displayByAddress(&s2);

    // Array of structures (pass by address internally)
    printf("\n--- Array of Structures ---\n");
    storeArray(arr, 3);
    displayArray(arr, 3);
}

// Pass by value
void storeByValue(struct Student s) {
    printf("Enter rollNo, name, marks: ");
    scanf("%d %s %f", &s.rollNo, s.name, &s.marks);
    // changes here won't reflect in main()
}

void displayByValue(struct Student s) {
    printf("Roll: %d, Name: %s, Marks: %.2f\n", s.rollNo, s.name, s.marks);
}

// Pass by address
void storeByAddress(struct Student *s) {
    printf("Enter rollNo, name, marks: ");
    scanf("%d %s %f", &s->rollNo, s->name, &s->marks);
}

void displayByAddress(struct Student *s) {
    printf("Roll: %d, Name: %s, Marks: %.2f\n", s->rollNo, s->name, s->marks);
}

// Array of structures
void storeArray(struct Student s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter rollNo, name, marks for student %d: ", i + 1);
        scanf("%d %s %f", &s[i].rollNo, s[i].name, &s[i].marks);
    }
}

void displayArray(struct Student s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Roll: %d, Name: %s, Marks: %.2f\n", s[i].rollNo, s[i].name, s[i].marks);
    }
}
