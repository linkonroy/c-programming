#include <stdio.h>

int main(void)
{
    int marks[5];
    int target;
    int found = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter mark %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("Enter mark to search: ");
    scanf("%d", &target);

    for (int i = 0; i < 5; i++)
    {
        if (marks[i] == target)
        {
            printf("Mark %d found at position %d.\n", target, i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Mark %d was not found.\n", target);
    }

    return 0;
}
