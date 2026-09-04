#include <stdio.h>

int isValidMark(int mark)
{
    if (mark >= 0 && mark <= 100)
    {
        return 1;
    }

    return 0;
}

int main(void)
{
    int mark;

    printf("Enter mark (0-100): ");
    scanf("%d", &mark);

    if (isValidMark(mark))
    {
        printf("Valid mark.\n");
    }
    else
    {
        printf("Invalid mark. Must be between 0 and 100.\n");
    }

    return 0;
}
