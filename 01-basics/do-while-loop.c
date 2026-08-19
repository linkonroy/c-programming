#include <stdio.h>

int main(void)
{
    int choice;

    do
    {
        printf("\n--- Student Management Menu ---\n");
        printf("1. View Students\n");
        printf("2. Add Student\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Viewing students...\n");
        }
        else if (choice == 2)
        {
            printf("Adding student...\n");
        }
        else if (choice == 3)
        {
            printf("Exiting program...\n");
        }
        else
        {
            printf("Invalid choice. Try again.\n");
        }

    } while (choice != 3);

    return 0;
}
