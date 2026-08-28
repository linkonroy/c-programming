#include <stdio.h>

void greetStudent(char name[])
{
    printf("Welcome, %s!\n", name);
}

int main(void)
{
    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    greetStudent(name);

    return 0;
}
