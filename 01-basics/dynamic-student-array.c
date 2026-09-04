#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[30];
    int mark;
};

int main(void)
{
    struct Student *students;
    int count;

    printf("How many students? ");
    scanf("%d", &count);
    getchar();  // Consume newline

    students = (struct Student *) malloc(count * sizeof(struct Student));

    if (students == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input student data
    for (int i = 0; i < count; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Enter mark: ");
        scanf("%d", &students[i].mark);
        getchar();  // Consume newline
    }

    // Display all students
    printf("\n--- All Students ---\n");
    for (int i = 0; i < count; i++)
    {
        printf("Student %d: %s, Mark: %d\n",
               i + 1, students[i].name, students[i].mark);
    }

    // Calculate average
    int total = 0;
    for (int i = 0; i < count; i++)
    {
        total += students[i].mark;
    }
    float average = (float) total / count;
    printf("\nAverage mark: %.2f\n", average);

    free(students);
    printf("\nMemory freed successfully.\n");

    return 0;
}
