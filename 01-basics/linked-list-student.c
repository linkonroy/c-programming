#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[30];
    int mark;
    struct Student *next;
};

struct Student* addStudent(struct Student *head, char name[], int mark)
{
    struct Student *newStudent = (struct Student *) malloc(sizeof(struct Student));

    if (newStudent == NULL)
    {
        printf("Memory allocation failed.\n");
        return head;
    }

    strcpy(newStudent->name, name);
    newStudent->mark = mark;
    newStudent->next = NULL;

    if (head == NULL)
    {
        return newStudent;
    }

    struct Student *current = head;

    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = newStudent;

    return head;
}

void displayStudents(struct Student *head)
{
    struct Student *current = head;

    if (current == NULL)
    {
        printf("No students in the list.\n");
        return;
    }

    printf("\n--- Student List ---\n");
    while (current != NULL)
    {
        printf("Name: %s, Mark: %d\n", current->name, current->mark);
        current = current->next;
    }
}

struct Student* deleteStudent(struct Student *head, char name[])
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return NULL;
    }

    if (strcmp(head->name, name) == 0)
    {
        struct Student *temp = head;
        head = head->next;
        free(temp);
        printf("Deleted student: %s\n", name);
        return head;
    }

    struct Student *current = head;

    while (current->next != NULL && strcmp(current->next->name, name) != 0)
    {
        current = current->next;
    }

    if (current->next == NULL)
    {
        printf("Student %s not found.\n", name);
        return head;
    }

    struct Student *temp = current->next;
    current->next = temp->next;
    free(temp);
    printf("Deleted student: %s\n", name);

    return head;
}

void freeStudents(struct Student *head)
{
    struct Student *current = head;
    struct Student *next;

    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
}

int main(void)
{
    struct Student *head = NULL;

    head = addStudent(head, "Alice", 85);
    head = addStudent(head, "Bob", 72);
    head = addStudent(head, "Charlie", 90);
    head = addStudent(head, "Diana", 65);

    displayStudents(head);

    head = deleteStudent(head, "Bob");
    displayStudents(head);

    head = deleteStudent(head, "Eve");
    displayStudents(head);

    head = deleteStudent(head, "Alice");
    displayStudents(head);

    freeStudents(head);
    printf("\nMemory freed successfully.\n");

    return 0;
}
