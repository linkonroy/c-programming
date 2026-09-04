#include <stdio.h>

int main(void)
{
    int marks[5] = {85, 72, 90, 65, 78};
    int *ptr;

    ptr = marks;  // Same as &marks[0]

    printf("Accessing array using pointer:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("marks[%d] = %d, *(ptr + %d) = %d\n",
               i, marks[i], i, *(ptr + i));
    }

    printf("\nArray name as pointer:\n");
    printf("marks = %p\n", marks);
    printf("&marks[0] = %p\n", &marks[0]);
    printf("ptr = %p\n", ptr);

    // Modify using pointer arithmetic
    *(ptr + 2) = 95;  // Change marks[2] to 95

    printf("\nAfter modifying via pointer:\n");
    printf("marks[2] = %d\n", marks[2]);

    return 0;
}
