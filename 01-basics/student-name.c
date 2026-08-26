#include <stdio.h>
#include <string.h>

int main(void)
{
    char firstName[30];
    char lastName[30];
    char fullName[70];

    printf("Enter first name: ");
    fgets(firstName, sizeof(firstName), stdin);

    printf("Enter last name: ");
    fgets(lastName, sizeof(lastName), stdin);

    firstName[strcspn(firstName, "\n")] = '\0';
    lastName[strcspn(lastName, "\n")] = '\0';

    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    printf("\nFull name: %s\n", fullName);

    return 0;
}
