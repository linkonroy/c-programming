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

    for (int i = 0; i < 5; i++)
    {
        printf("Enter student %d name: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Enter mark for %s: ", students[i].name);
        scanf("%d", &students[i].mark);
        getchar();
    }

    file = fopen("students_struct.txt", "w");

    if (file == NULL)
    {
        printf("Error creating file.\n");
        return 1;
    }

    fprintf(file, "Student Records (Struct)\n");
    fprintf(file, "-------------------------\n");

    for (int i = 0; i < 5; i++)
    {
        fprintf(file, "Name: %s, Mark: %d\n",
                students[i].name, students[i].mark);
    }

    fclose(file);

    printf("\nStudent records saved to students_struct.txt successfully.\n");

    return 0;
}
