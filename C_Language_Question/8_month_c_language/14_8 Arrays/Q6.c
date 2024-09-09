// Finding prime/ composite elements of array:
#include <stdio.h>
int main()
{
    int a[100], num, count;
    printf("Enter array size 1-100 ");
    scanf("%d", &num);
    printf("Enter %d element ", num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < num; i++)
    {
        if (a[i] == 1)
        {
            puts("1 Not a prime / composite no ");
        }
        else
        {
            count = 0;
            for (int j = 1; j <= a[i]; j++)
            {
                if (a[i] % j == 0)
                {
                    count++;
                }
            }
            if (count == 2)
            {
                printf("%d Prinme \n", a[i]);
            }
            else
            {
                printf("%d composite\n", a[i]);
            }
        }
    }

    return 0;
}