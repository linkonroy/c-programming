#include <stdio.h>
#include <string.h>

int findStudent(char names[][30], int size, char target[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(names[i], target) == 0)
        {
            return i + 1;  // Return position (1-based)
        }
    }

    return -1;  // Not found
}

int main(void)
{
    char names[5][30];
    char target[30];
    int position;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter student %d name: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
    }

    printf("\nEnter name to search: ");
    fgets(target, sizeof(target), stdin);
    target[strcspn(target, "\n")] = '\0';

    position = findStudent(names, 5, target);

    if (position != -1)
    {
        printf("Student found at position %d.\n", position);
    }
    else
    {
        printf("Student not found.\n");
    }

    return 0;
}
