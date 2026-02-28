// Circular Linked List Creation and Traversal - Implement using linked list with dynamic memory allocation.
// Name: Krishna Aggarwal
// SAP ID: 590022060

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void traverse(Node *head)
{
    Node *temp = head;
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    while (temp != head);
    printf("\n");
}

int main()
{
    Node *head = NULL;
    
}
