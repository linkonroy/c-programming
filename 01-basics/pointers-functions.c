#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void addBonus(int *mark, int bonus)
{
    *mark += bonus;
    if (*mark > 100)
    {
        *mark = 100;
    }
}

int main(void)
{
    int x = 10;
    int y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);

    int mark = 85;
    printf("\nOriginal mark: %d\n", mark);
    addBonus(&mark, 10);
    printf("After 10-point bonus: %d\n", mark);

    return 0;
}
