
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    long int studentID;
    char department[100];
    char name[100];
    
};

void createFile();
void addStudent();
void searchByName();
void listStudents();

int main() {
    int choice;

    do {
        printf("\n# Menu #\n");
        printf("1- Add a record\n");
        printf("2- Create file\n");
        printf("3- List the students\n");
        printf("3- Search for students by name and Decode their information on the screen\n");
        printf("4- Exit\n");
        printf("Make your choice: ");
        scanf("%d", &choice);
        getchar(); 
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                createFile();
                break;
            case 3:
                listStudents();
                break;
            case 4:
                searchByName();
                break;
            case 5:
                printf("Exiting the program\n");
                break;
            default:
                printf("Wrong choice, please try again!\n");
        }
    } while (choice != 5);

    return 0;
}

void createFile() {
    FILE* file = fopen("students.dat", "wb");

    if (file == NULL) {
        printf("The file could not be created:\n");
        return;
    }

    printf("The file was created: students.dat\n");
    fclose(file);
}

void searchByName() {
    char searchName[50];
    struct Student student;
    FILE* file = fopen("students.dat", "rb");

    if (file == NULL) {
        printf("The file could not be opened.\n");
        return;
    }

    printf("Enter the name of the student you want to search for: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0';

    while (fread(&student, sizeof(struct Student), 1, file)) {
        if (strcmp(student.name, searchName) == 0) {
            printf("\nThe student was found:\n");
            printf("StudentID: %d\n", student.studentID);
            printf("Name: %s\n", student.name);
            printf("Department: %s\n", student.department);
            fclose(file);
            return;
        }
    }

    printf("The student could not be found.\n");
    fclose(file);
}

void addStudent() {
    struct Student student;
    FILE* file = fopen("students.dat", "ab");

    if (file == NULL) {
        printf("The file could not be opened.\n");
        return;
    }

    printf("Enter the student information:\n");
    printf("StudentID: ");
    scanf("%d", &student.studentID);
    getchar(); 
    printf("Name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0'; 
    fgets(student.department, sizeof(student.department), stdin);
    student.department[strcspn(student.department, "\n")] = '\0';

    fwrite(&student, sizeof(struct Student), 1, file);

    printf("The student was registered:\n");
    fclose(file);
}


void listStudents() {
    struct Student student;
    FILE* file = fopen("students.dat", "rb");

    if (file == NULL) {
        printf("The file could not be opened:\n");
        return;
    }

    printf("Students:\n");

    while (fread(&student, sizeof(struct Student), 1, file)) {
        printf("StudentID: %d\n", student.studentID);
        printf("Name: %s\n", student.name);
        printf("Department: %s\n", student.department);
        printf("\n");
    }

    fclose(file);
}
