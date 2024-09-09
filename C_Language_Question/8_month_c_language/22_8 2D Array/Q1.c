// Finding fractions of n*n matrix:

#include <stdio.h>
int dummy(float a) { float *p = &a; }
int main()
{
    float a[10][10], b[10][10];
    int nr, nc, r, c;
    printf("Enter no of rows and columns ");
    scanf("%d %d", &nr, &nc);

    printf("Enter %d numbers for 1st array \n", nr * nc);

    for (r = 0; r < nr; r++)
    {
        for (c = 0; c < nc; c++)
        {
            scanf("%f", &a[r][c]);
        }
    }

    printf("Enter %d numbers for 2nd array \n", nr * nc);

    for (r = 0; r < nr; r++)
    {
        for (c = 0; c < nc; c++)
        {
            scanf("%f", &b[r][c]);
        }
    }
    puts("Result elements are ");
    for (r = 0; r < nr; r++)
    {
        for (c = 0; c < nc; c++)

        {
            printf("%10.2f", a[r][c] / b[r][c]);
        }
        printf("\n");
    }
}