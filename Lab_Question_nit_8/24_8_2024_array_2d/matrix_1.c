// Write a program in C for a 2D array of size 3x3 and print the matrix. Test Data : Input elements in the matrix :

// element - [0],[0] : 1
// element - [0],[1] : 2
// element - [0],[2] : 3
// element - [1],[0] : 4
// element - [1],[1] : 5
// element - [1],[2] : 6
// element - [2],[0] : 7
// element - [2],[1] : 8
// element - [2],[2] : 9

// Expected Output :
// The matrix is : 1 2 3 4 5 6 7 8 9

#include <stdio.h>
int main()
{
    int a[100][100], nr, nc;
    printf("Enter array of size no of row 1-100 : "),
        scanf("%d", &nr);
    printf("Enter array of size no of cols 1-100 : "),
        scanf("%d", &nc);
    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
        {

            printf("element - [%d],[%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix is : ");
    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
        {

            printf("%2d", a[i][j]);
        }
    }

    return 0;
}