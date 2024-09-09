// 1)BusTicketBooker
// You are developing a program for an online bus ticket booking platform called "BusTicketBooker." The platform offers tickets for a fixed price of Rs. 300 per seat. However, there are discounts available for senior citizens. If a passenger's age is between 60 and 100 (inclusive), they will receive a 20% discount on the total booking cost.

// Write a C program for "BusTicketBooker" that takes the number of tickets and the age of the passenger as inputs and calculates the total booking cost after applying any applicable discount using the ternary operator. The program should then display the bill with a suitable message, including the total cost and the discount amount (if applicable).

// Your task is to implement the program logic inside the main function by using only Ternary Operator
// Note :- This Booking is only for one person NOt For multiple user
// Sample Input
// Age of passenger :-
// Sample Output
// Calculate discount if his age is between the criteria
#include <stdio.h>
int main()
{
    float num_ticket, age_of_passenger, total_booking_cost, discount;
    printf("Enter the number of ticket : ");
    scanf("%f", &num_ticket);
    printf("Enter the age of passenger : ");
    scanf("%f", &age_of_passenger);
    total_booking_cost = num_ticket * 300;
    discount = age_of_passenger >= 60 && age_of_passenger <= 100 ? total_booking_cost * 30/100 : 0;
    total_booking_cost -= discount;
    printf("Total price of ticket :%.2f\n", num_ticket * 300);
    printf("Total discount of amount :%.2f\n", discount);
    printf("Total booking of cost :%.2f\n", total_booking_cost);
}