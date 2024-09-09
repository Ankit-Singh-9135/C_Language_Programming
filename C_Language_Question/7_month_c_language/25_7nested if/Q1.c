// Read a person age and gender and determine that person is eligible

#include <stdio.h>
int main()
{
    int age;
    char gen;
    printf("Enter the age ");
    scanf("%d", &age);
    printf("Enter the gender ");
    scanf(" %c", &gen);

    if (gen == 'm' || gen == 'M' || gen == 'f' || gen == 'F')
    {
        if (age >= 21 || (gen == 'f' || gen == 'F') && age >= 18)
        {
            printf("Eligible");
        }
        else
        {
            printf("Not Eligible");
        }
    }
    else
        {
            printf("Invalid gender");
        }
    
}