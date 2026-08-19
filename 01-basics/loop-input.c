#include <stdio.h>

int main(void)
{
    int numberOfStudents;
    float mark;
    float total = 0.0f;

    printf("Enter number of students: ");
    scanf("%d", &numberOfStudents);

    if (numberOfStudents <= 0)
    {
        printf("Number of students must be greater than 0.\n");
        return 1;
    }

    for (int i = 1; i <= numberOfStudents; i++)
    {
        printf("Enter mark for student %d: ", i);
        scanf("%f", &mark);

        total += mark;
    }

    printf("\nTotal marks: %.2f\n", total);
    printf("Average marks: %.2f\n", total / numberOfStudents);

    return 0;
}
