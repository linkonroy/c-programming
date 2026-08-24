#include <stdio.h>

int main(void)
{
    int marks[5];
    int threshold;
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter mark %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("Enter minimum mark: ");
    scanf("%d", &threshold);

    for (int i = 0; i < 5; i++)
    {
        if (marks[i] >= threshold)
        {
            count++;
        }
    }

    printf("\nNumber of marks at or above %d: %d\n", threshold, count);

    return 0;
}
