#include <stdio.h>
int main()
{
    float height, base, tringle, rectangle;
    printf("Enter the height number ");
    scanf("%f",&height);
     printf("Enter the base number ");
    scanf("%f",&base);
    tringle = 0.5 * base * height;
    rectangle = base * height;
    printf("Area of Triangle = %f\n", tringle);
    printf("Area of rectangle = %f", rectangle);

    return 0;
}