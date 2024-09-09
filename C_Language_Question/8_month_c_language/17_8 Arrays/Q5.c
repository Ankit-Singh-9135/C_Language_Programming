// Deleting array element:

// 1. Skipping method

#include <stdio.h>
void main()
{
    int a[100], i, n, ele, f = 0;
    printf("Enter array size 1 - 100 ");
    scanf("%d", &n);

    printf("Enter %d integers ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to delete ");
    scanf("%d", &ele);
    printf("Element are ");

    for (i = 0; i < n; i++)
    {
        if (a[i] != ele)
        {
            printf("%3d", a[i]);
        }
        else
        {
            f = 1;
            if (f == 0)
            {
                printf("\n%d not found ", ele);
            }
        }
    }
}