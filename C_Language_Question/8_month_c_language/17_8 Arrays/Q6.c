// Permanent deletion [pop-left shifting of array
// elements]:

#include <stdio.h>
int main()
{
    int a[100], i, n, ele, f = 0, j;

    printf("Enter array size 1 - 100 ");
    scanf("%d", &n);

    printf("Enter %d integers", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to delete ");
    scanf("%d", &ele);

    for (i = 0; i < n; i++)
    {
        if (a[i] == ele)
        {
            for (n--, f = 1, j = i; j < n; j++)
            {
                a[j] = a[j + 1];
            }
                i--;
        }
    }
    if (f == 0)
    {
        printf("\n%d not found", ele);
    }
    else
    {
        printf("Elements are");
        for (i = 0; i < n; i++)
        {
            printf("%4d", a[i]);
        }
    }
}