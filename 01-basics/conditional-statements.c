#include <stdio.h>

int main(void)
{
    float cgpa;

    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);

    if (cgpa >= 3.50)
    {
        printf("Academic status: Excellent\n");
    }
    else if (cgpa >= 3.00)
    {
        printf("Academic status: Good\n");
    }
    else if (cgpa >= 2.00)
    {
        printf("Academic status: Satisfactory\n");
    }
    else
    {
        printf("Academic status: Academic Warning\n");
    }

    return 0;
}
