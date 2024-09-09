// Find the simple interest.
// formula p*t*r/100
#include<stdio.h>
int main(){
float p,r,si,total;
int t;
printf("Enter principal, time, rate of interest");
scanf("%f %d %f",&p,&t,&r);
si=p*t*r/100;
total=p+si;
printf("Simple interest =%.2f,total=%.2f",si,total);
}