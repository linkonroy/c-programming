#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int mark;
};

int main(void)
{
    struct Student students[5];
    FILE *file;
    int count = 0;

    file = fopen("students_struct.txt", "r");

    if (file == NULL)
    {
        printf("Error: students_struct.txt not found.\n");
        printf("Run struct-file-save.c first to create the file.\n");
        return 1;
    }

    // Skip the header lines
    char line[100];
    fgets(line, sizeof(line), file);  // "Student Records (Struct)"
    fgets(line, sizeof(line), file);  // "-------------------------"

    while (fgets(line, sizeof(line), file) != NULL && count < 5)
    {
        // Format: "Name: Alice, Mark: 85"
        sscanf(line, "Name: %29[^,], Mark: %d",
               students[count].name, &students[count].mark);
        count++;
    }

    fclose(file);

    printf("Loaded %d student records:\n\n", count);

    for (int i = 0; i < count; i++)
    {
        printf("Student %d: %s, Mark: %d\n",
               i + 1, students[i].name, students[i].mark);
    }

    return 0;
}
