#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int mark;
};

void displayStudent(struct Student s)
{
    printf("Name: %s, Mark: %d\n", s.name, s.mark);
}

int isPassed(struct Student s)
{
    return s.mark >= 40;
}

void applyBonus(struct Student *s, int bonus)
{
    s->mark += bonus;
    if (s->mark > 100)
    {
        s->mark = 100;
    }
}

int main(void)
{
    struct Student student1;

    strcpy(student1.name, "Alice");
    student1.mark = 85;

    printf("Original student:\n");
    displayStudent(student1);

    printf("\nChecking if passed: %s\n",
           isPassed(student1) ? "Yes" : "No");

    applyBonus(&student1, 10);

    printf("\nAfter 10-point bonus:\n");
    displayStudent(student1);

    return 0;
}
