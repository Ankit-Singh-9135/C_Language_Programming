// Input purchase amount and calcu payabal amount According to following
// pa>=1500=>40%D
// 1500>pa>=10000=>30%D
// otherwise =>20%D

#include <stdio.h>
int main()
{
    float purchase_amount, discount, payable_amount;
    printf("Enter the purchase amount : ");
    scanf("%f", &purchase_amount);
    if (purchase_amount >= 15000)
    {
        discount = purchase_amount * 40 / 100;
    }
    else if (purchase_amount >= 10000)
    {
        discount = purchase_amount * 30 / 100;
    }
    else
    {
        discount = purchase_amount * 20 / 100;
    }
    payable_amount = purchase_amount - discount;
    printf("payable amount = %f", payable_amount);

    return 0;
}