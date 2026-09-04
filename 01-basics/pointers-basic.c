#include <stdio.h>

int main(void)
{
    int number = 42;
    int *ptr;

    ptr = &number;  // Store address of number

    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", &number);
    printf("Value stored in ptr (address): %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    // Modify through pointer
    *ptr = 100;

    printf("\nAfter modifying through pointer:\n");
    printf("Value of number: %d\n", number);
    printf("Value pointed to by ptr: %d\n", *ptr);

    return 0;
}
