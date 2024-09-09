
// Finding element index no:

#include <stdio.h>
void main()
{
    int a[100], i, n, ele, f = 0;
    printf("Enter array size 1 - 100 ");
    scanf("%d", &n);

    printf("Enter %d integers", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter element to search ");
    scanf("%d", &ele);

    for (i = 0; i < n; i++)
    {
        if (a[i] == ele)
        {
            printf("%d in a[%d] cell\n", ele, i, f = 1);
        }
    }
    if (f == 0)
    {
        printf("%d not found", ele);
    }
}