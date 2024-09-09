#include<stdio.h>
int main(){
int principal_amount,time,rest,simple_interest;
printf("Enter the principal_amount :");
scanf("%d",&principal_amount);
printf("Enter the time :");
scanf("%d",&time);
printf("Enter the rest :");
scanf("%d",&rest);
simple_interest=principal_amount*time*rest/100;
printf("simpal interest = %d",simple_interest);
    return 0;
}