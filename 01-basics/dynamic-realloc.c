#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr;
    int size;

    printf("Initial number of marks: ");
    scanf("%d", &size);

    ptr = (int *) malloc(size * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input initial marks
    for (int i = 0; i < size; i++)
    {
        printf("Enter mark %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    printf("\nCurrent marks:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Mark %d: %d\n", i + 1, ptr[i]);
    }

    // Resize array
    int newSize;
    printf("\nEnter new size: ");
    scanf("%d", &newSize);

    ptr = (int *) realloc(ptr, newSize * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    // If new size is larger, input additional marks
    if (newSize > size)
    {
        printf("\nEnter %d additional marks:\n", newSize - size);
        for (int i = size; i < newSize; i++)
        {
            printf("Enter mark %d: ", i + 1);
            scanf("%d", &ptr[i]);
        }
    }

    printf("\nUpdated marks:\n");
    for (int i = 0; i < newSize; i++)
    {
        printf("Mark %d: %d\n", i + 1, ptr[i]);
    }

    free(ptr);
    printf("\nMemory freed successfully.\n");

    return 0;
}
