#include <stdio.h>

int main(void)
{
    int marks[5];
    FILE *file;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter mark %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    file = fopen("marks.txt", "w");

    if (file == NULL)
    {
        printf("Error creating file.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        fprintf(file, "Mark %d: %d\n", i + 1, marks[i]);
    }

    fclose(file);

    printf("\nMarks written to marks.txt successfully.\n");

    return 0;
}
