#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr;
    int number;

    printf("How many marks? ");
    scanf("%d", &number);

    // Allocate memory for 'number' integers
    ptr = (int *) malloc(number * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input marks
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

    // Free allocated memory
    free(ptr);
    printf("\nMemory freed successfully.\n");

    return 0;
}
