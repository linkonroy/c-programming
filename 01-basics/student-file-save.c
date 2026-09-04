#include <stdio.h>
#include <string.h>

int main(void)
{
    char names[5][30];
    int marks[5];
    FILE *file;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter student %d name: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0';

        printf("Enter mark for %s: ", names[i]);
        scanf("%d", &marks[i]);
        getchar();  // Consume newline left by scanf
    }

    file = fopen("students.txt", "w");

    if (file == NULL)
    {
        printf("Error creating file.\n");
        return 1;
    }

    fprintf(file, "Student Records\n");
    fprintf(file, "----------------\n");

    for (int i = 0; i < 5; i++)
    {
        fprintf(file, "Name: %s, Mark: %d\n", names[i], marks[i]);
    }

    fclose(file);

    printf("\nStudent records saved to students.txt successfully.\n");

    return 0;
}
