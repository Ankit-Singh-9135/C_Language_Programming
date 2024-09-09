// arrange even elements in ascending and odd  in descending order:

#include <stdio.h>
void main()
{
    int a[10], temp, n;
    printf("Enter array size 1 - 10 : ");
    scanf("%d", &n);
    printf("Enter %d integers ", n);
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &a[i]);
    }

    for (int i = 0; i <= n - 2; i++)
    {
        for (int j = 0; j <= n - i - 2; j++)
        {

            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("ascending ");
    for (int i = 0; i < n; i++)
    {

        if (a[i] % 2 == 0)
        {

            printf("%4d", a[i]);
        }
    }
    printf("\ndescending");           
    for (n--; n >= 0; n--)

    {
        printf("\n%d",a[n]);
        if (a[n] % 2 != 0)
        {

            printf("\nodd = %4d", a[n]);
        }
    }
}