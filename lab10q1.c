#include <stdio.h>
#include <stdlib.h>

 struct node
 {
    int data;
    struct node* next;
 };

struct node* add_begin(struct node* head, int data)
{
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = head;
    return new_node;
}

struct node* add_end(struct node* head, int data)
{
    struct node* new_node = (struct node*)malloc(sizeof(struct node));

    new_node->data = data;
    new_node->next = NULL;

    if (head == NULL)
        return new_node;

    struct node* current = head;

    while (current->next != NULL)
        current = current->next;
        current->next = new_node;
    return head;
}


int main()
{
    void list();
    
    
    struct node* head = NULL;
    int num;

    while (1)
        {
        printf("Enter a number (-1 for list): ");
        scanf("%d", &num);
        if (num == -1)
            break;
        if (num % 2 == 0)
            head = add_end(head, num);
        else
            head = add_begin(head, num);
        }

    printf("List: ");
    list(head);
    return 0;
}

void list(struct node* head)
{
    struct node* current = head;
    while (current != NULL)
        {
        printf("%d ", current->data);
        current = current->next;
        }
    printf("\n");
}


