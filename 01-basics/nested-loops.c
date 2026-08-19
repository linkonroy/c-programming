#include <stdio.h>

int main(void)
{
    for (int student = 1; student <= 3; student++)
    {
        printf("Student %d:\n", student);

        for (int course = 1; course <= 3; course++)
        {
            printf("  Course %d\n", course);
        }

        printf("\n");
    }

    return 0;
}
