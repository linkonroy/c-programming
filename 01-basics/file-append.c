#include <stdio.h>

int main(void)
{
    int newMark;
    FILE *file;

    printf("Enter a new mark to append: ");
    scanf("%d", &newMark);

    file = fopen("marks.txt", "a");

    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(file, "New mark: %d\n", newMark);

    fclose(file);

    printf("Mark appended to marks.txt successfully.\n");

    return 0;
}
