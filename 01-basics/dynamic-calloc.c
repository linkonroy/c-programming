#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr;
    int number;

    printf("How many marks? ");
    scanf("%d", &number);

    // Allocate and initialize memory to zero
    ptr = (int *) calloc(number, sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Display initial values (all zero)
    printf("\nInitial values (all zero):\n");
    for (int i = 0; i < number; i++)
    {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    // Input marks
    printf("\nEnter marks:\n");
    for (int i = 0; i < number; i++)
    {
        printf("Enter mark %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    // Display marks
    printf("\nMarks entered:\n");
    for (int i = 0; i < number; i++)
    {
        printf("Mark %d: %d\n", i + 1, ptr[i]);
    }

    free(ptr);
    printf("\nMemory freed successfully.\n");

    return 0;
}
