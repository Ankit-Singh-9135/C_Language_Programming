#include <stdio.h>
int main()
{
    int radius, surface_Area_of_sphare, volume_of_sphare;
    float p = 3.14;
    printf("Enter the radius ");
    scanf("%d", &radius);
    surface_Area_of_sphare = 4 * p * radius * radius;
    volume_of_sphare = 4 / 3 * p * radius * radius * radius;
    printf("surface_Area_of_sphare = %d\n", surface_Area_of_sphare);
    printf("volume_of_sphare = %d", volume_of_sphare);

    return 0;
}