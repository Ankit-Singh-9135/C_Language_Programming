// 3)Area of Different Shape
// Write a C program that takes 2 number as input and store that number in a variable, First input for radius of a Circle and 2nd input for side of a Square.
// input
// Enter radius of Circle : 12
// Enter side of Square : 5
// output
// Area of Circle is : 452.16
// Area of Square is : 25

#include <stdio.h>
int main()
{
    float radius, Area_of_circle;
    int side, Area_of_square;
    printf("Enter radius of Circle :");
    scanf("%f", &radius);
    printf("Enter side of Square :");
    scanf("%d", &side);
    Area_of_circle = 3.14 * radius * radius;
    Area_of_square = side * side;
    printf("Area of Circle is :%f\nArea of Square is :%d", Area_of_circle, Area_of_square);
}