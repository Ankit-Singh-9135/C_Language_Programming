// 3)Shopping Of TV
// A shopkeeper buys a TV set for Rs. 3500 and sells it at a profit of 27%. Apart from this a VAT of 12.7% and Service Charge is 3.87% is charged. 
// Write a C program to Display total selling price, profit along with vat and service charge.
// Cost Price: Rs. 3500
// Selling Price: Rs. 4445.00
// Profit: Rs. 945.00
// VAT: Rs. 564.52
// Service Charge: Rs. 171.02
// Total Selling Price: Rs. 5180.54

#include <stdio.h>
int main()
{
  float cp = 3500;
  
  float p = cp * 27 / 100;
  float sp = cp + p;
  float vat = sp * 12.7 / 100;
  float service_charge = sp * 3.87 / 100;
  float total = sp + vat + service_charge;

  printf("Profit = %.2f", p);
  printf("\nVAT = %.2f", vat);
  printf("\nService charge = %.2f", service_charge);
  printf("\nTotal Selling Price = %.2f", total);

  return 0;
}