// Fahrenheit to Celsius:
// C = f-32 * 5/9  //formula#include<stdio.h>
#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter temp in Fahrenheit");
scanf("%f",&f);
    c = (f - 32) * 5 / 9;
    printf("%.1f%c Fahrenheit is %.1f%c Celsius", f, 248, c, 248);
}
