#include <stdio.h>
#include <string.h>

int main(void)
{
    char names[5][30];
    char target[30];
    int found = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter student %d name: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);

        names[i][strcspn(names[i], "\n")] = '\0';
    }

    printf("\nEnter name to search: ");
    fgets(target, sizeof(target), stdin);

    target[strcspn(target, "\n")] = '\0';

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(names[i], target) == 0)
        {
            printf("Student found at position %d.\n", i + 1);
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
