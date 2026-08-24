#include <stdio.h>

int main(void)
{
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter mark %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\nStudent Marks:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Mark %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}
