#include<stdio.h>
int main(){
float radius,hight,VOC;
float p=3.14;
printf("Enter the radius ");
scanf("%f",&radius);
printf("Enter the hight ");
scanf("%f",&hight);
VOC=p*radius*radius*hight;
printf("Area of cylinder = %.2f",VOC);
    
    return 0;
}