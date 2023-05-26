
#include <stdio.h>
#include <string.h>
#define maxname 100


int main() {

struct Student {
    char name[50];
    int age;
    long int Number;
};


struct Student students[5];

    for (int i = 0; i < 5; i++) {
        printf("enter the information of student %d:\n", i+1);
        printf("Name: ");
        fgets(students[i].name, maxname, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';
        printf("Age: ");
        scanf("%d", &students[i].age);
         getchar();
        printf("Student Number: ");
        scanf("%ld", &students[i].Number);
         getchar();
        printf("\n");
    }

   
    printf("Student information:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Student Number: %ld\n", students[i].Number);
        printf("\n");
    }

    return 0;
}