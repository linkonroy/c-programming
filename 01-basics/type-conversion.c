#include <stdio.h>

int main(void)
{
    int totalMarks = 376;
    int totalSubjects = 5;

    float average1 = totalMarks / totalSubjects;
    float average2 = (float) totalMarks / totalSubjects;

    printf("Without type conversion: %.2f\n", average1);
    printf("With type conversion   : %.2f\n", average2);

    return 0;
}
