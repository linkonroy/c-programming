#include <stdio.h>

int main(void)
{
    int marks[5];
    int total = 0;
    float average;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter mark %d: ", i + 1);
        scanf("%d", &marks[i]);

        total += marks[i];
    }

    average = (float) total / 5;

    printf("\nTotal marks: %d\n", total);
    printf("Average marks: %.2f\n", average);

    return 0;
}
