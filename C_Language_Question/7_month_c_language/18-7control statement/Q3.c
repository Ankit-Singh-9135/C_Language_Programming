// Celsius to Fahrenheit:
// 37.0° celsius is 98.6°
#include<stdio.h>
int main(){
    float c,f;
    printf("Enter temp in celsius");
    scanf("%f",&c);
    f=c*1.8+32;
    printf("%.1f%c celsius is %.1f%c Fahrenheit",c,248,f,248);
}
