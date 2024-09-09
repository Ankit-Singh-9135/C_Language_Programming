#include<stdio.h>
int main(){
float hight,base,triangle,rectangle;
printf("Enter the hight :");
scanf("%f",&hight);
printf("Enter the base :");
scanf("%f",&base);
if(hight>base){
    triangle=0.5*base*hight;
    printf("Area of triangle = %f",triangle);
}else{
    rectangle=base*hight;
    printf("Area of rectangle = %f",rectangle);
}
    
    return 0;
}