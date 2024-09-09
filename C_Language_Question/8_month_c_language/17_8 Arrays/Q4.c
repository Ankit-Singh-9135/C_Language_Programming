// Inserting a new element into array [push-right shifting
// of array elements]:

#include <stdio.h>
void main()
{
    int a[100], i, n, ele, pos;
    printf("Enter array size 1 - 100 ");
    scanf("%d", &n);

    printf("Enter %d integers ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter new element and position ");
    scanf("%d%d", &ele, &pos);
    if (pos < 1 || pos > n + 1)
    {
        printf("position 1 to %d only", n + 1);
    }
    else
    {

        for (i = n; i >= pos; i--)
        {
            a[i] = a[i - 1];
        }
        a[i] = ele;

        printf("Elements are ");
        for (i = 0; i <= n; i++)
        {
            printf("%4d", a[i]);
        }
        }
}