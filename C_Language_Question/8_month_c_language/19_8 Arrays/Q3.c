// Frequency of array elements:

#include <stdio.h>
int main()
{
    int a[100], b[100] = {0}, i, j, c, n;
    printf("Enter array sizes 1 100 ");
    scanf("%d", &n);

    printf("Enter %d integers for a array ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)

    {
        if (b[i] != -1)
        {

            for (c = 1, j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    c++;
                    b[j] = -1;
                }
            }
            b[i] = c;
        }
    }

    for (i = 0; i < n; i++)
    {
        if (b[i] != -1)
        {

            printf("%d found %d times\n", a[i], b[i]);
        }
    }
}