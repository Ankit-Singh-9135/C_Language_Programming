// Input two no if first is greater then second than calcu substract otherwise addition

#include <stdio.h>
int main()
{
    int num1, num2, subst, add;
    printf("Enter the number1 :");
    scanf("%d",&num1);
    printf("Enter the number2 :");
    scanf("%d",&num2);
    if (num1 > num2)
    {
        subst = num1 - num2;
        printf(" Substraction = %d", subst);
    }
    else
    {
        add = num1 + num2;
        printf("Addition = %d", add);
    }

    return 0;
}