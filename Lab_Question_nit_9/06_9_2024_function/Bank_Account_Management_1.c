// 1)Bank Account Management
// Bank Account Management: Develop a program that simulates a simple bank account system. Users can create accounts, deposit money, withdraw money, and check their balances. Implement separate functions for these operations. Take the initial balance as Rs.2000.

// Condition : 

// For deposit :

// * If the user want to deposit 0 or negetive amount then print "Invalid amount to deposit"


// For withdraw : 

// * If the user want to withdraw 0 or negetive amount then print "Invalid amount to withdrawal"

// * If the user given amount is greater than the balance then print "Insufficient Funds"
// Sample Input
// Deposit Rs.500
// Withdraw Rs.3000
// Withdraw Rs.1000
// Deposit Rs.-200
// Withdraw Rs.0
// Check balance
// Sample Output
// Sample Input/Output:
// ---------------------

// Deposit Rs.500
// Deposited: Rs.500
// Current Balance: Rs.2500

// Withdraw Rs.3000
// Insufficient Funds

// Withdraw Rs.1000
// Withdrew: Rs.1000
// Current Balance: Rs.1500

// Deposit Rs.-200
// Invalid amount to deposit

// Withdraw Rs.0
// Invalid amount to withdrawal

// Check balance
// Current Balance: Rs.1500


#include <stdio.h>
void curr_bal();
void check_bal();
void withdraw_money();
void deposit_money();
int curr_amt = 2000, wdraw_amt, dept_amt;
int main()
{
  deposit_money();
  withdraw_money();
  withdraw_money();
  deposit_money();
  withdraw_money();
  check_bal();
  return 0;
}
void withdraw_money()
{
  printf("\n\nEnter withdraw amount : ");
  scanf("%d", &wdraw_amt);
  if (wdraw_amt > curr_amt)
  {
    printf("Insufficient Funds");
  }
  else if (wdraw_amt > 0)
  {
    printf("Withdrew : Rs.%d", wdraw_amt);
    curr_amt -= wdraw_amt;
    curr_bal();
  }

  else
  {
    printf("Invalid amount to deposit");
  }
}

void deposit_money()
{
  printf("\n\nEnter deposit amount : ");
  scanf("%d", &dept_amt);
  if (dept_amt > 0)
  {
    printf("Deposited : Rs.%d", dept_amt);
    curr_amt += dept_amt;
    curr_bal();
  }
  else
  {
    printf("Invalid amount to deposit");
  }
}
void curr_bal()
{
  printf("\nCurrent Balance : Rs.%d", curr_amt);
}
void check_bal()
{
  printf("\n\nCheck Balance\nCurrent Balance : Rs.%d", curr_amt);
}