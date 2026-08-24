#include <stdio.h>

int main(void)
{
    int marks[5] = {80, 75, 90, 85, 70};

    for (int i = 0; i < 5; i++)
    {
        printf("Mark %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}
