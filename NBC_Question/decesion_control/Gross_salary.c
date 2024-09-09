// Input base salary and calcu gross saqlary calcu gross salary .According to following
// Bs>=10000  =>TA=10%
//               DA=5%
// 10000>Bs>=8000=> TA =>9%
//                  DA =>4%
// otherwise => TA =8%
//              DA =3%
//  GS=BS+TD+DA

#include <stdio.h>
int main()
{
    float basic_salary, gross_salary, TA, DA;
    printf("Enter the base salary : ");
    scanf("%f", &basic_salary);
    if (basic_salary >= 10000)
    {
        TA = basic_salary * 10 / 100;
        DA = basic_salary * 5 / 100;
    }
    else if (basic_salary >= 8000)
    {
        TA = basic_salary * 9 / 100;
        DA = basic_salary * 4 / 100;
    }
    gross_salary = basic_salary + TA + DA;
    printf("Gross_salary = %f", gross_salary);

    return 0;
}