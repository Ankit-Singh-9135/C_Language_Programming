// Deleting duplicate elements from array:

#include <stdio.h>
int main()
{
    int a[100], num, k;
    printf("Enter array of size 1-100 ");
    scanf("%d", &num);
    printf("Enter %d integers ", num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < num; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (a[i] == a[j])
            {
                for (num--,k = j; k < num; k++)
                {
                    a[k] = a[k + 1];
                }
                j--;
            }
        }
    }
    printf("\nnum = %d\n", num);
    printf("Elements are ");
    for (int i = 0; i < num; i++)
    {
        printf("%4d", a[i]);
    }

    printf("\nnum = %d", num);

    return 0;
}