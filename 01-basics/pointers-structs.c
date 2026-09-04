#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int mark;
};

void displayStudent(const struct Student *s)
{
    printf("Name: %s, Mark: %d\n", s->name, s->mark);
}

void updateMark(struct Student *s, int newMark)
{
    s->mark = newMark;
}

int main(void)
{
    struct Student student1;
    struct Student *ptr;

    strcpy(student1.name, "Alice");
    student1.mark = 85;

    ptr = &student1;

    printf("Using pointer to struct:\n");
    printf("Name: %s, Mark: %d\n", ptr->name, ptr->mark);

    printf("\nCalling functions with pointers:\n");
    displayStudent(ptr);

    updateMark(ptr, 92);
    printf("\nAfter updating mark:\n");
    displayStudent(ptr);

    return 0;
}
