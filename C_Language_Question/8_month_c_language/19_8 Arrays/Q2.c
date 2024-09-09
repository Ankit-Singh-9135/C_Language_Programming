// Merging or arryas:

#include <stdio.h>
int main()
{

    int a[100], b[100], num1, num2;

    printf("Enter 1st array sizes 1 -100 : ");
    scanf("%d", &num1);
    printf("Enter 2nd array sizes 1 - 100 : ");
    scanf("%d", &num2);

    printf("Enter %d integers for a array : ", num1);
    for (int i = 0; i < num1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter %d integers for b array : ", num2);
    for (int i = 0; i < num2; i++)
    {
        scanf("%d", &b[i]);
    }

    for (int i = num1, j = 0; j < num2; i++, j++)
    {
        a[i] = b[j];
    }
    for (int i = 0; i < num1 + num2; i++)

    {
        for (int j = i + 1; j < num1 + num2; j++)
        {
            if (a[i] > a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    printf("Elements are : ");
    for (int i = 0; i < num1 + num2; i++)
    {
        printf("%4d", a[i]);
    }
}