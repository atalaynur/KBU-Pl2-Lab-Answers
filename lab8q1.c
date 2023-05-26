#include <stdio.h>
#include <string.h>

#define maxstudent 10
#define maxname 100


struct student {
    long int number;
    char name[100];
    char surname[100];
    double midtermgrade;
};

int main() {
    struct student students[maxstudent];  
    int numofstudents = 0; 

    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i+1);

        printf("Number: ");
        scanf("%ld", &students[i].number);
         getchar();

        printf("Name: ");
        fgets(students[i].name, maxname, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Surname: ");
        fgets(students[i].surname, maxname, stdin);
        students[i].surname[strcspn(students[i].surname, "\n")] = '\0';
        printf("Midterm: ");
        scanf("%lf", &students[i].midtermgrade);

        numofstudents++; 
    }

    printf("\nStudents whose information is entered:\n");
    for (int i = 0; i < numofstudents; i++) {
        printf("Student %d\n", i+1);
        printf("Number: %ld\n", students[i].number);
        printf("Name: %s\n", students[i].name);
        printf("Surname: %s\n", students[i].surname);
        printf("Midterm: %.2f\n", students[i].midtermgrade);
        
    }

    return 0;
}
