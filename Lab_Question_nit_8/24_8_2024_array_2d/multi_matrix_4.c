// Write a program in C for multiplication of two square Matrices.

// Test Data :

// Input the rows and columns of first matrix : 2 2

// Input the rows and columns of second matrix : 2 2

// Input elements in the first matrix :

// element - [0],[0] : 1

// element - [0],[1] : 2

// element - [1],[0] : 3

// element - [1],[1] : 4

// Input elements in the second matrix :

// element - [0],[0] : 5

// element - [0],[1] : 6

// element - [1],[0] : 7

// element - [1],[1] : 8

// Expected Output :

// The First matrix is :

// 1 2

// 3 4

// The Second matrix is :

// 5 6

// 7 8

// The multiplication of two matrix is :

// 19 22

//  43 50

#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter the rows and col:");
    scanf("%d%d", &r, &c);
    int a[r][c], b[r][c];
    printf("Input first matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("elements are-[%d],[%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Input second matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("elements are-[%d],[%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nFirst matrix is like as\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    printf("\nSecond matrix is like as\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            printf("%3d", b[i][j]);
        }
        printf("\n");
    }
    printf("\n multiplication of matrix is like as\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            printf("%3d", (a[i][j] * b[i][j]));
        }
        printf("\n");
    }

    return 0;
}
