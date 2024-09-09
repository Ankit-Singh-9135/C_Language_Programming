// Finding row sum and columns sum:
#include <stdio.h>
int main()
{
    int a[10][10], nr, nc, r, c, rs, cs;
    printf("Enter no of rows and columns ");
    scanf("%d %d", &nr, &nc);
    if (nr == nc)
    {
        printf("Enter %d integers\n", nr * nc);
        for (r = 0; r < nr; r++)
        {
            for (c = 0; c < nc; c++)
            {
                scanf("%d", &a[r][c]);
            }
        }
        for (r = 0; r < nr; r++)
        {
            for (rs = cs = c = 0; c < nc; c++)
            {
                rs += a[r][c];
                cs += a[c][r];
            }
            a[r][c] = rs;
            a[c][r] = cs;
        }
        printf("Row sum and column sum\n");
        for (r = 0; r <= nr; r++)
        {
            for (c = 0; c <= nc; c++)
            {
                if (r == nr && c == nc)
                {
                    continue;
                }
                else
                {
                    printf("%3d", a[r][c]);
                }
            }

            printf("\n");
        }
    }
    else
        printf("Rows and columns should be same");
    return 0;
}