#include <stdio.h>

int main(void)
{
    FILE *file;
    char line[100];

    file = fopen("students.txt", "r");

    if (file == NULL)
    {
        printf("Error: students.txt not found.\n");
        printf("Run student-file-save.c first to create the file.\n");
        return 1;
    }

    printf("Loading student records from file:\n\n");

    while (fgets(line, sizeof(line), file) != NULL)
    {
        printf("%s", line);
    }

    fclose(file);

    return 0;
}
