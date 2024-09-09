// Read a customer id, name, Quantity purchased and rate of
// item. Find the amount, 35% discount and total.
#include<stdio.h>
int main(){
    int id;
    char name[20];
    float qut,price,amount,disc,total;
    printf("Enter consumer id, name, Quantity purchased and rate of item ");
    scanf("%d %s %f %f",&id,name,&qut,&price);
    amount=qut*price;
    disc=amount*0.35; //amount *35/100
    total = amount-disc;
    printf("Amount=%.2f, Discount=%.2f, total=%.2f",amount,disc,total);

}