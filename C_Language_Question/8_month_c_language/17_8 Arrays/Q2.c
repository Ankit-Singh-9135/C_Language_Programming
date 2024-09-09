// Linear search:
#include <stdio.h>
int main()
{
    int a[100], num, ele, f = 0;
    printf("Enter array size 1 - 100 ");
    scanf("%d", &num);
    printf("Enter %d integers ", num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter element to search ");
    scanf("%d", &ele);
    for (int i = 0; i < num; i++)
    {
        if (a[i] == ele)
        {
            printf("%d in %d cell\n", ele, i + 1, f = 1);
        }
    }
    if (f == 0)
    {
        printf("%d not found", ele);
    }
    return 0;
}