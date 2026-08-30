#include <stdio.h>

float calculateAverage(int marks[], int size)
{
    int total = 0;

    for (int i = 0; i < size; i++)
    {
        total += marks[i];
    }

    return (float) total / size;
}

int main(void)
{
    int marks[5];
    float average;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter mark %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    average = calculateAverage(marks, 5);

    printf("\nAverage mark: %.2f\n", average);

    return 0;
}
