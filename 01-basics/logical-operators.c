#include <stdio.h>

int main(void)
{
    int age = 20;
    float cgpa = 3.75;

    printf("Age: %d\n", age);
    printf("CGPA: %.2f\n\n", cgpa);

    printf("Age between 18 and 25: %d\n",
           age >= 18 && age <= 25);

    printf("CGPA is above 3.50 OR age is below 18: %d\n",
           cgpa > 3.50 || age < 18);

    printf("Age is NOT below 18: %d\n",
           !(age < 18));

    return 0;
}
