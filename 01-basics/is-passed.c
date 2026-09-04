#include <stdio.h>

int isPassed(int mark)
{
    if (mark >= 40)
    {
        return 1;
    }

    return 0;
}

int main(void)
{
    int mark;

    printf("Enter mark: ");
    scanf("%d", &mark);

    if (isPassed(mark))
    {
        printf("Result: Passed\n");
    }
    else
    {
        printf("Result: Failed\n");
    }

    return 0;
}
