// Matrix multiplication:

#include <stdio.h>
int main()
{

    int a[10][10], b[10][10], nr, nc, r, c, k, s;
    printf("Enter no of rows and columns ");
    scanf("%d %d", &nr, &nc);

    printf("Enter %d numbers for 1st array \n", nr * nc);

    for (r = 0; r < nr; r++)
    {
        for (c = 0; c < nc; c++)
        {
            scanf("%d", &a[r][c]);
        }
    }
    printf("Enter %d numbers for 2nd array \n", nr * nc);

    for (r = 0; r < nr; r++)
    {
        for (c = 0; c < nc; c++)
        {
            scanf("%d", &b[r][c]);
        }
    }
    puts("Result elements are ");
    for (r = 0; r < nr; r++)
    {
        for (c = 0; c < nc; c++)
        {
            for (k = s = 0; k < nc; k++)
            {
                s = s + a[r][k] * b[k][c];
            }
            printf("%3d", s);
        }
        printf("\n");
    }
}