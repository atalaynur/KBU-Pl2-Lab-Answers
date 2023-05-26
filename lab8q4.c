#include <stdio.h>
#include <stdlib.h>


struct Student {
    char name[50];
    int age;
    int rollNumber;
};

int main() {
    
    int numStudents;

    printf("How many student information will you enter? ");
    scanf("%d", &numStudents);

    struct Student* students = (struct Student*)malloc(numStudents * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation error!");
        return 1;
    }

    for (int i = 0; i < numStudents; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Student ID: ");
        scanf("%d", &students[i].rollNumber);
        printf("\n");
    }

    printf("Student Information:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Student ID: %d\n", students[i].rollNumber);
        printf("...................................\n");
    }

    free(students);

    return 0;
}

