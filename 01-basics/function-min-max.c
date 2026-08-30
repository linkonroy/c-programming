#include <stdio.h>

int findHighest(int marks[], int size)
{
    int highest = marks[0];

    for (int i = 1; i < size; i++)
    {
        if (marks[i] > highest)
        {
            highest = marks[i];
        }
    }

    return highest;
}

int findLowest(int marks[], int size)
{
    int lowest = marks[0];

    for (int i = 1; i < size; i++)
    {
        if (marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }

    return lowest;
}

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

    highest = findHighest(marks, 5);
    lowest = findLowest(marks, 5);

    printf("\nHighest mark: %d\n", highest);
    printf("Lowest mark: %d\n", lowest);

    return 0;
}
