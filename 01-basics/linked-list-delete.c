#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

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

// Delete first occurrence of a value
struct Node* deleteNode(struct Node *head, int value)
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return NULL;
    }

    // If head needs to be deleted
    if (head->data == value)
    {
        struct Node *temp = head;
        head = head->next;
        free(temp);
        printf("Deleted %d from list.\n", value);
        return head;
    }

    struct Node *current = head;

    while (current->next != NULL && current->next->data != value)
    {
        current = current->next;
    }

    if (current->next == NULL)
    {
        printf("%d not found in list.\n", value);
        return head;
    }

    struct Node *temp = current->next;
    current->next = temp->next;
    free(temp);
    printf("Deleted %d from list.\n", value);

    return head;
}

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
    head = insertAtEnd(head, 40);
    head = insertAtEnd(head, 50);

    printf("Original list:\n");
    displayList(head);

    head = deleteNode(head, 30);
    displayList(head);

    head = deleteNode(head, 10);
    displayList(head);

    head = deleteNode(head, 60);
    displayList(head);

    head = deleteNode(head, 50);
    displayList(head);

    freeList(head);
    printf("\nMemory freed successfully.\n");

    return 0;
}
