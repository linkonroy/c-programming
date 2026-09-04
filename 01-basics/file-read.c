#include <stdio.h>

int main(void)
{
    FILE *file;
    char line[100];

    file = fopen("marks.txt", "r");

    if (file == NULL)
    {
        printf("Error: marks.txt not found.\n");
        return 1;
    }

    printf("Reading marks from file:\n");

    while (fgets(line, sizeof(line), file) != NULL)
    {
        printf("%s", line);
    }

    fclose(file);

    return 0;
}
