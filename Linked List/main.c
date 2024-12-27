#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    int data;
    struct Node* next;
}node;


void write(struct Node* n)
{
    node* temp = n;
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    node* n = (node*)malloc(sizeof(node));
    n->data = 2;
    n->next = NULL;

    n->next = (node*)malloc(sizeof(node));
    n->next->data = 3;
    n->next->next = NULL;

    printf("%d\n", n->data);
    printf("%d\n", n->next->data);

    printf("--------------------------\n");

    printf("%p\n", &(n->data));
    printf("%p\n", &(n->next->data));

    printf("--------------------------\n");

    write(n);

    return 0;
}
