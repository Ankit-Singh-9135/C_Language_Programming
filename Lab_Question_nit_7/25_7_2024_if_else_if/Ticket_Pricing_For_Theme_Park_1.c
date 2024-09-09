// 1)Ticket Pricing For Theme Park
// You are developing a ticket pricing system for a theme park. Write a program that takes the following inputs from a customer:

// Age (integer)

// Height in centimeters (float)

// Whether the customer has a VIP pass (y or n)

// The program should calculate the ticket price based on the following rules:

// Children under 3 years old (inclusive) get in for free.

// Children aged 4 to 12 (inclusive) pay Rs.20.

// Adults aged 13 to 64 (inclusive) pay Rs.100.

// Seniors aged 65 and above pay Rs.50.

// However, there are some additional considerations based on height:

// If the customer is above 180 cm in height, they pay an extra 50.

// If the customer is between 120 cm (inclusive) and 180 cm (inclusive), no additional charge applies.

// If the customer is below 120 cm, they receive a 50% discount on the base ticket price.

// If the customer has a VIP pass, they get a 10% discount on the final ticket price.

// Write a program that implements these pricing rules and provides the following output:

// The customer's age, height, and VIP pass status.

// The calculated base ticket price before any discounts or additional charges.

// Any discounts or additional charges applied based on height.

// The final ticket price after applying all discounts and charges.

// Additionally, if the customer's age is below 0 or height is negative, the program should provide an error message.
// Sample Input
// -
// Sample Output
// -

#include <stdio.h>
int main()
{
    int age;
    float height, discount;
    char vip;
    float price = 0;

    printf("Enter the age :");
    scanf("%d", &age);
    printf("Enter the height :");
    scanf("%f", &height);
    printf("Enter the customer has a VIP pass (y or n) :");
    scanf(" %c", &vip);

    if (age <= 3)
    {
        price = price + 0;
        // printf(" Children under free");
    }
    else if (age >= 4 && age <= 12)
    {
        price = price + 20;
        // printf("Children Rs.20");
    }
    else if (age >= 13 && age <= 64)
    {
        price = price + 100;
        // printf("Adults Rs.100");
    }
    else if (age >= 65)
    {
        price = price + 50;
        // printf("Seniors Rs.50");
    }
    float price_height;
    if (height > 180)
    {
        price_height = price + 50;
    }
    else if (height >= 120 && height <= 180)
    {
        price_height = price + 0;
    }
    else if (height<=120)
    {
        price_height = price - (price * 50 / 100);
    }
    int price_vip;
    if (vip == 'Y' || vip == 'y')
    {
        price_vip = price - (price * 10 / 100);
    }

    printf("the customer's age : %d\n", age);
    printf("the customer's height : %f\n", height);
    printf("the customer's vip : %c\n", vip);
    printf("ticket price before any discounts or additional charges : %0.2f\n",price);
    printf("Any discounts or additional charges applied based on height : %0.2f\n",price_height);
    printf("The final ticket price after applying all discounts and charges : %d",price_vip);


}