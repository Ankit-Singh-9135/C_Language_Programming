// Finding 2nd max, 2nd min elements of sorted array:

#include <stdio.h>
void main()
{
    int a[10], temp, n;
    printf("Enter array size 1 - 10 ");
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
    for (int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }

    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[0])
        {
            printf("\n2nd Min=%d\n", a[i]);
            break;
        }
    }

    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] < a[n - 1])
        {
            printf("\n2nd Max=%d", a[i]);
            break;
        }
    }
}