#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
}node;

void write(node* n)
{
    node* temp = n;
    while(temp!=NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void push(node** head_ref, int new_data)
{
    node* new_node = (node*)malloc(sizeof(node));
    if(new_node == NULL)
    {
        printf("Memory allocation failed.");
        return;
    }

    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

int main()
{
    node* head = NULL;

    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);

    write(head);
}
