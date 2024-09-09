// 4)Find the Area
// Write a C program to calculate and print the area of a square and rectangle.
// input :-
// Side of square is : 5
// Length and breadth of rectanngle is : 4 , 5
// output:-
// Area of square is : 25
// Area of rectanngle is : 20
#include <stdio.h>
int main()
{
    int square, length, breadth, areaofsquare,areaofrectangle;
    printf("Enter the square num : ");
    scanf("%d", &square);
    areaofsquare = square * square;
    printf("Enter the rectangle num : ");
    scanf("%d%d", &length, &breadth);
    areaofrectangle = length * breadth;
    printf("Area of square :%d\nArea of rectangle :%d", areaofsquare, areaofrectangle);
    return 0;
}