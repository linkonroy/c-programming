#include <stdio.h>

int main(void)
{
    printf("Using break:\n");

    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            break;
        }

        printf("%d ", i);
    }

    printf("\n\nUsing continue:\n");

    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            continue;
        }

        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
