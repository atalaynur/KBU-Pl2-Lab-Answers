#include <stdio.h>
#include <stdlib.h>

struct student{
    long int no;
    char name1[100];
    float midterm, final;
    struct student *next;
};
typedef struct student dugum;
dugum *head = NULL;
dugum *newDugum;

int main(){
int want=0;
void studentlist();
void addstudent();
void deletstudent();
void printstudents();
double calculate();
void average();
void mostsuccesfullsutudent();
printf("1-Create a List\n2-Add a New Record \n3-Delete Registration\n4-The Highest Success Grade\n5-Class Average\n6-Exit\n");
    while(1)
    { 
        printf("Make a choice [1-6]?\n");
        scanf("%d", &want);
        switch(want)
        {
            case 1: studentlist();
                    printstudents ();
                    break;
            case 2: addstudent();
                    printstudents();
                    break;
            case 3: deletstudent();
                    printstudents();
                    break;
            case 4: calculate();
                    mostsuccesfullsutudent();
                    break;
            case 5: average();
                    break;
            case 6: return 0;
            default: printf("I'm an overnight choice. Please try again.\n");
                     break;
        }
    }
    return 0;
}

void studentlist() {
    int n, k;
    printf("How many people will you create a list of:");
    scanf("%d", &n);
    for (k = 0; k < n; k++) {
        if (k == 0) {
            newDugum = (dugum*)malloc(sizeof(dugum));
            head = newDugum;
        }
        else {
            newDugum->next = (dugum*)malloc(sizeof(dugum));
            newDugum = newDugum->next;
        }
        printf("\nStudent Number:"); 
        scanf("%ld", &newDugum->no);
        printf("\n!!please do not leave spaces when writing your name and surname!!\n");
        printf("Student's name and surname:");
        scanf("%s", newDugum->name1);
        printf("\nMidterm: "); 
        scanf("%f", &newDugum->midterm);
        printf("\nFinal: "); 
        scanf("%f", &newDugum->final);
    }
    newDugum->next = NULL;
}

void printstudents(){
    double semester = 0;
    dugum *p = head;
    while(p != NULL)
    {
        printf("\n \n");
        printf ("Student Number: %ld\t",p->no);
        printf ("Student's name:%s\t",p->name1);
        printf ("Midterm:%.2f\t",p->midterm);
        printf ("Final: %.2f\t",p->final);
        semester = p->midterm * 0.4 + p->final * 0.6;
        printf ("Avarage : %.2f\t", semester);
        printf("\n \n");
        p = p->next;
    }
}
void addstudent() {
    int registrationo;
    dugum *p, *q;

    newDugum = (dugum *) malloc(sizeof(dugum));
    printf("Student number:"); scanf ("%ld", &newDugum->no);
    printf("Student name:"); scanf("%s", newDugum->name1);
    printf("Midterm:"); scanf ("%f", &newDugum->midterm);
    printf(" Final:"); scanf ("%f", &newDugum->final);
    printf("Before which recording do you want to add?\n");
    printf("Enter 0 to add to the end of the list:");
    scanf("%d", &registrationo);

    p = head;
    if (p == NULL || p->no == registrationo) { 
        newDugum->next = p;
        head = newDugum;
    } else {
        while (p != NULL) {
            q = p;
            p = p->next;
            if (p == NULL) {
                newDugum->next = NULL;
                q->next = newDugum; 
                break;
            } else if (p->no == registrationo) { 
                newDugum->next = p;
                q->next = newDugum;
                break;
            }
        }
    }
}

void deletstudent() {
    int registrationo;
    dugum *p, *q;
    
    printf("Enter the student number you want to delete:");
    scanf("%d", &registrationo);
    
    p = head;
    if(p->no == registrationo) { 
        head = p->next;
        free(p);
    }
    else {
        while(p->next != NULL) {
            if(p->no == registrationo) {
                q->next = p->next;
                free(p);
                return;
            }
            q = p;
            p = p->next;
        }
        if(p->no == registrationo) { 
            q->next = NULL;
            free(p);
        }
        else {
            printf("There is no student to delete\n");
        }
    }
}

double calculate(int midterm, int final) {
    return (0.4 * midterm) + (0.6 * final);
}

void mostsuccesfullsutudent() {
  
    double SNote = 0;
    dugum *p, *MSNote;
    MSNote = head;

    for (p = head; p != NULL; p = p->next) {
        if (calculate(p->midterm, p->final) > calculate(MSNote->midterm, MSNote->final)) {
            MSNote = p;
        }
    }

    printf("The most successful student:\n");
    printf("No:%ld - Name: %s Avarage:%.2f\n", MSNote->no, MSNote->name1, calculate(MSNote->midterm, MSNote->final));
}

void average() {
    dugum *p = head;
    double sum = 0;
    int counter = 0;
    while(p != NULL) {
        sum += p->midterm * 0.4 + p->final * 0.6;
        counter++;
        p = p->next;
    }
    printf("Class Avarage : %.2f\n", sum/counter);
}