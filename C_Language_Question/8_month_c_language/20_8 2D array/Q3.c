// Direct initialization of a n*n matrix:

#include <stdio.h>
int main()
{
    // int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // int a[2][3] = {1,2,3,4,5,6};
    // int a[2][3] = {1, 2};
    // int a[2][3] = {{1}, {2}};
    // int a[2][3] = {{1}, {2},{3}}; //warning
    // int a[2][3] = {{1,2,3,4}}; //warning
    // int a[2][3] = {{1},2,3,4};
    // int a[2][3] = {{1}, {2},3,4}; //warning
    // int a[2][3] = {{1}, 2, 3, {4}}; //warning
    // int a[2][3] = {{1,2}, {3,4}};
    // int a[2][3] = {{1,2}, {}};
    // int a[][] = {1, 2, 3, 4, 5, 6}; //Error
    // int a[2][] = {1, 2, 3, 4, 5, 6}; //Error
    // int a[][3] = {1, 2, 3, 4, 5, 6};
    // int a[][3] = {1, 2, 3};   //123 0 gr
    // int a[][3] = {1};   //100  gr 1
    // int a[2][3] = {9}; a[0][0]=1; a[1][2]=6;
    // int a[2][3]; a[0][0]=1; a[1][2]=6;  // gr value
    // int a[2][-3] = {1,2,3,4,5,6};//warning
    //  int a[2][6/2] = {1,2,3,4,5,6};
    //  int a[2][6%2] = {1,2,3,4,5,6}; //warning
    //  int a[2][2] = {1,2,3,4,5,6}; //warning
    int a[2][2] = {1, 2, 3, 4}; a[0][2] = 10;a[1][2] = 60;



    puts("Element ");
    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("%3d", a[r][c]);
           
        }
        printf("\n");
    }

    return 0;
}