#include <stdio.h>

int main(void)
{
    int marks[5];
    int highest;
    int lowest;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter mark %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    highest = marks[0];
    lowest = marks[0];

    for (int i = 1; i < 5; i++)
    {
        if (marks[i] > highest)
        {
            highest = marks[i];
        }

        if (marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }

    printf("\nHighest mark: %d\n", highest);
    printf("Lowest mark: %d\n", lowest);

    return 0;
}
