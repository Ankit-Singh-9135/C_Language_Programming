// 2)Surface Area Of Cylinder

// Write a C program to find the surface area of a cylinder.Take the height and radius as a input from the user by using scanf().

// The surface area of a cylinder can be calculated using the formula:

// A = 2PIr^2 + 2PIrh

// Find the surface area and print the radius, height and also the surface area.

// Enter the radius of the cylinder: 5
// Enter the height of the cylinder: 10

// Radius: 5.00
// Height: 10.00
// Surface Area: 471.24
#include <stdio.h>
int main()
{
    float pi = 3.14;
    float radius, height, surface_Area_of_cylinder;
    printf("Enter the radius of the cylinder :");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder:");
    scanf("%f", &height);
    surface_Area_of_cylinder = 2 * pi * radius * radius + 2 * pi * radius * height;
    printf("Radius:%f\nHeight:%f\nSurface Area of cylinder:%f",radius,height,surface_Area_of_cylinder);
}