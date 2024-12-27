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
        printf("%d", temp->data);
        temp = temp->next;
    }
}

void append(node** head_ref, int new_data)
{
    node* new_node = (node*)malloc(sizeof(node));
    if(new_node==NULL)
    {
        printf("Memory allocation failed.");
        return;
    }

    new_node->data = new_data;
    new_node->next = NULL;

    if(*head_ref==NULL)
    {
        *head_ref=new_node;
        return;
    }

    node* last = *head_ref;
    while(last->next!=NULL)
    {
        last = last->next;
    }
    last->next = new_node;
}

int main()
{
    node* head = NULL;

    append(&head, 4);
    append(&head, 3);
    append(&head, 2);
    append(&head, 1);

    write(head);
}
