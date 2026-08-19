#include <stdio.h>

int main(void)
{
    int numberOfStudents;
    int targetId;
    int studentId;
    int found = 0;

    printf("Enter number of students: ");
    scanf("%d", &numberOfStudents);

    if (numberOfStudents <= 0)
    {
        printf("Number of students must be greater than 0.\n");
        return 1;
    }

    printf("Enter student ID to search: ");
    scanf("%d", &targetId);

    for (int i = 1; i <= numberOfStudents; i++)
    {
        printf("Enter student ID %d: ", i);
        scanf("%d", &studentId);

        if (studentId == targetId)
        {
            printf("Student found at position %d.\n", i);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Student not found.\n");
    }

    return 0;
}
