#include <stdio.h>

int main(void)
{
    int age = 20;
    float height = 5.8f;
    double pi = 3.1415926535;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Pi: %.10lf\n", pi);
    printf("Grade: %c\n", grade);

    return 0;
}
