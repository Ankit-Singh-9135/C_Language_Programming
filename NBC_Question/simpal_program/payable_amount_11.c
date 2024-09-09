#include<stdio.h>
int main(){
float p_shirt,n_shirt,dis,payble_amount;
printf("Enter the p_shirt ");
scanf("%f",&p_shirt);
printf("Enter the n_shirt ");
scanf("%f",&n_shirt);
printf("Enter the dis ");
scanf("%f",&dis);
payble_amount=p_shirt*n_shirt-(p_shirt*n_shirt*dis)/100;
printf("payble_amount = %f",payble_amount);
    
    return 0;
}