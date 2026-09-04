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

int countPassed(int marks[], int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (marks[i] >= 40)
        {
            count++;
        }
    }

    return count;
}

int main(void)
{
    int marks[5];
    float average;
    int highest;
    int passedCount;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter mark for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    average = calculateAverage(marks, 5);
    highest = findHighest(marks, 5);
    passedCount = countPassed(marks, 5);

    printf("\n--- Result Summary ---\n");
    printf("Average mark: %.2f\n", average);
    printf("Highest mark: %d\n", highest);
    printf("Number of students who passed: %d\n", passedCount);

    return 0;
}
