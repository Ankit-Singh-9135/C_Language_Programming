// Input marks of three Subject print pass it every Sulject is greater then 50 otherwise fall.

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
    if (num1 > 50)
    {
        if (num2 > 50)
        {
            if (num3 > 50)
            {
                printf("pass");
            }
            else
            {
                printf("fail");
            }
        }
        else
        {
            printf("fail");
        }
    }
    else
    {
        printf("fail");
    }

    return 0;
}