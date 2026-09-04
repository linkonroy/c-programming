#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int mark;
};

int main(void)
{
    struct Student students[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter student %d name: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Enter mark for %s: ", students[i].name);
        scanf("%d", &students[i].mark);
        getchar();  // Consume newline
    }

    printf("\n--- All Students ---\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Student %d: %s, Mark: %d\n",
               i + 1, students[i].name, students[i].mark);
    }

    return 0;
}
