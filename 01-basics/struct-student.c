#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int mark;
};

int main(void)
{
    struct Student student1;

    strcpy(student1.name, "Alice");
    student1.mark = 85;

    printf("Student Details:\n");
    printf("Name: %s\n", student1.name);
    printf("Mark: %d\n", student1.mark);

    return 0;
}
