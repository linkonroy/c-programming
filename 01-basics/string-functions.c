#include <stdio.h>
#include <string.h>

int main(void)
{
    char firstName[] = "Link";
    char copiedName[50];
    char secondName[] = "On";

    printf("First name: %s\n", firstName);
    printf("Length: %zu\n", strlen(firstName));

    strcpy(copiedName, firstName);

    printf("Copied name: %s\n", copiedName);

    if (strcmp(firstName, secondName) == 0)
    {
        printf("The names are the same.\n");
    }
    else
    {
        printf("The names are different.\n");
    }

    return 0;
}
