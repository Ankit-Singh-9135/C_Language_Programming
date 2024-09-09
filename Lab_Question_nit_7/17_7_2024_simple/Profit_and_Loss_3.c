// 3)Profit and Loss Calculator
// You are tasked with creating a C program to calculate the profit and loss for a given transaction using the following formulas. Take the cost price and selling price from the user by using scanf().
// Profit (P) = Selling Price (SP) - Cost Price (CP)
// Loss (L) = Cost Price (CP) - Selling Price (SP)
// Profit Percentage (PP) = Profit * 100 / cost Price
// Loss Percentage (LP) = Loss * 100 / cost Price
// Write a C program that prompts the user for the Cost Price (CP) and the Selling Price (SP) of an item. Calculate and display the profit or loss, as well as the corresponding profit percentage or loss percentage based on the provided formulas.
// Your program should:
// Prompt the user to enter the Cost Price (CP) and Selling Price (SP) as input.
// Calculate the profit (P) or loss (L) based on the given formulas.
// Calculate the profit percentage (PP) or loss percentage (LP) based on the given formulas.
// Display the calculated profit or loss, as well as the profit percentage or loss percentage.
// Read the following input from user
// Cost Price: [CP]
// Selling Price: [SP]
// Profit/Loss: [P/L]
// Profit Percentage: [PP]%
// Loss Percentage: [LP]%
// Cost Price: 1500
// Selling Price: 1800
// Profit/Loss: [calculatedProfitOrLoss]
// Profit Percentage: [calculatedProfitPercentage]%
// Loss Percentage: [calculatedLossPercentage]%
#include <stdio.h>
int main()
{
    float Cost_Price, Selling_Price, Profit, Loss, Profit_Percentage, Loss_Percentage;
    printf("Enter the cost price :");
    scanf("%f", &Cost_Price);
    printf("Enter the selling price :");
    scanf("%f", &Selling_Price);
    Profit = Selling_Price - Cost_Price;
    Loss = Cost_Price - Selling_Price;
    Profit_Percentage = Profit * 100 / Cost_Price;
    Loss_Percentage = Loss * 100 / Cost_Price;

    Selling_Price > Cost_Price &&printf("Profit : %.2f\n", Profit) && printf("Profit Percentage :%f\n", Profit_Percentage);
    
    Cost_Price > Selling_Price &&printf("Loss : %.2f\n", Loss) && printf("Loss Percentage :%f\n", Loss_Percentage);
    

    // printf("Profit_Percentage :%f",Profit * 100 / Cost_Price)&& printf("Loss_Percentage :%f",Loss * 100 / Cost_Price);
}