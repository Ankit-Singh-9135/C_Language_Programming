#include<stdio.h>
int main(){
int purchase_amount,discount;
printf("Enter the purchase_amount ");
scanf("%d",&purchase_amount);
discount=purchase_amount*20/100;
printf("Discount = %d",discount);
    
    return 0;
}