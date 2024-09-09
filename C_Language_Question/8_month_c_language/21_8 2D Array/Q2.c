// // Transpose of n*n matrix:
// // Swap of rows and columns

// #include <stdio.h>
// int main()
// {
//     int a[10][10], nr, nc, r, c, e, o, z;

//     printf("Enter no of rows and columns ");
//     scanf("%d %d", &nr, &nc);

//     printf("Enter %d integers\n", nr * nc);

//     for (r = 0; r < nr; r++)
//     {
//         for (c = 0; c < nc; c++)
//         {
//             scanf("%d", &a[r][c]);
//         }
//     }
//     puts("Transposed elements");
//     puts("---------------------------------------");

//     for (c = 0; c < nc; c++)
//     {

//         for (r = 0; r < nr; r++)
//         {

//             printf("%3d", a[r][c]);
//         }

//         printf("\n");
//     }

//     return 0;
// }

// // Method2:=================
// // Swap of columns and rows


#include <stdio.h>
int main()
{
    int a[10][10], nr, nc, r, c, e, o, z;

    printf("Enter no of rows and columns ");
    scanf("%d %d", &nr, &nc);

    printf("Enter %d integers\n", nr * nc);

    for (r = 0; r < nr; r++)
    {
        for (c = 0; c < nc; c++)
        {
            scanf("%d", &a[r][c]);
        }
    }
    puts("Transposed elements");
    puts("---------------------------------------");
    for (r = 0; r < nc; r++)
    {
        for (c = 0; c < nr; c++)
        {
            printf("%3d", a[c][r]);
        }

        printf("\n");
    }

    return 0;
}
