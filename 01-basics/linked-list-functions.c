#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Insert node at the beginning
struct Node* insertAtBeginning(struct Node *head, int data)
{
    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed.\n");
        return head;
    }

    newNode->data = data;
    newNode->next = head;

    return newNode;
}

// Insert node at the end
struct Node* insertAtEnd(struct Node *head, int data)
{
    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed.\n");
        return head;
    }

    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
    {
        return newNode;
    }

    struct Node *current = head;

    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = newNode;

    return head;
}

// Display the linked list
void displayList(struct Node *head)
{
    struct Node *current = head;

    printf("Linked List: ");
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Free all nodes
void freeList(struct Node *head)
{
    struct Node *current = head;
    struct Node *next;

    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
}

int main(void)
{
    struct Node *head = NULL;

    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);

    printf("After inserting at end:\n");
    displayList(head);

    head = insertAtBeginning(head, 5);
    head = insertAtBeginning(head, 1);

    printf("\nAfter inserting at beginning:\n");
    displayList(head);

    freeList(head);
    printf("\nMemory freed successfully.\n");

    return 0;
}
