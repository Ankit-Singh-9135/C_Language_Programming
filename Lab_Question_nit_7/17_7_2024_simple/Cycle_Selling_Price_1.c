// 1)Cycle Selling Price Calculator
// Rohan purchased an old cycle for Rs. 1200 and spent Rs. 250 on repairs, Rs. 350 on coloring, and added new accessories worth Rs. 500. Rohan wants to make a profit of Rs. 1500 on selling the cycle.
// Write a C program that calculates and displays the selling price of the cycle based on the given information.
// Your program should:

// Declare and initialize variables for the following costs:

// costPrice: The initial cost of the cycle (Rs. 1200)

// repairCost: The cost of repairs (Rs. 250)

// coloringCost: The cost of coloring (Rs. 350)

// accessoriesCost: The cost of new accessories (Rs. 500)

// desiredProfit: The desired profit (Rs. 1500)

// Calculate the total cost by adding up all the costs.

// Calculate the selling price by adding the total cost and the desired profit.
// Display the individual costs (cost price, repair cost, coloring cost, accessories cost, and desired profit) along with the calculated selling price.
#include <stdio.h>
int main()
{
    int costPrice, repairCost, coloringCost, accessoriesCost, desiredProfit, selling_price, profit;
    printf("Enter initial cost of the cycle (Rs. 1200) :");
    scanf("%d", &costPrice);
    printf("Enter cost of repairs (Rs. 250) :");
    scanf("%d", &repairCost);
    printf("Enter cost of coloring (Rs. 350) :");
    scanf("%d", &coloringCost);
    printf("Enter cost of new accessories (Rs. 500) : ");
    scanf("%d", &accessoriesCost);
    printf("Enter desired profit (Rs. 1500) :");
    scanf("%d", &desiredProfit);
    selling_price = costPrice + repairCost + coloringCost + accessoriesCost + desiredProfit;
    printf("the calculated selling price :%d", selling_price);
}