#include <stdio.h>
#include <stdlib.h>
#include <string.h>




struct node {
    int number;
    struct node *next;
};

struct node *cutlastaddhead(struct node* head)
{
    if (head == NULL)
        {
        printf("List is empty!\n");
        return NULL;
        }

    struct node* current = head;
    struct node* prev = NULL;

    while (current -> next != NULL)
        {
        prev = current;
        current = current->next;
        }

    if (prev != NULL)
        {
        prev -> next = NULL;
        current -> next = head;
        head = current;
        }

    return head;
}


int main()
{
    void printList();
    struct node* head = NULL;
    int number;
    char choice[10];

    do {
        printf("Enter a number: ");
        scanf("%d", &number);

        struct node* newNode = (struct node*)malloc(sizeof(struct node));
        newNode->number = number;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            struct node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }

        printf("Do you want to continue? (Yes/No): ");
        scanf(" %s", choice);
    } while (strcmp(choice, "yes") == 0);

    printf("Initial list: ");
    printList(head);

    head = cutlastaddhead(head);

    printf("Modified list: ");
    printList(head);


    struct node* current = head;
    while (current != NULL) {
        struct node* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}

void printList(struct node* head)
{
    struct node* current = head;

    while (current != NULL)
        {
        printf("%d ", current -> number);
        current = current -> next;
        }
    printf("\n");
}


