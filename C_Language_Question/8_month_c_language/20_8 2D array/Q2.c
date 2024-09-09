// Finding array value, address and position:
#include <stdio.h>
int main()
{
    int a[2][5] = {{1, 2, 3}, {4, 5, 6}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("a[%d][%d] value=%d address = %u\n", i, j,a[i][j], &a[i][j]);
        }
    }

    return 0;
}