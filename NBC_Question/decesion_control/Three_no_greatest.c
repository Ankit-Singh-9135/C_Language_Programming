#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter the num1 : ");
    scanf("%d", &num1);
    printf("Enter the num2 : ");
    scanf("%d", &num2);
    printf("Enter the num3 : ");
    scanf("%d", &num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("num1 is greatest");
    }
    else if (num2 > num3)
    {
        printf("num2 is greatest");
    }
    else if (num3 > num1)
    {
        printf("num3 is greatest");
    }
    else
    {
        printf("Both are equel");
    }

    return 0;
}