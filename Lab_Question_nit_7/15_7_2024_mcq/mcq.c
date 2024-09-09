// 1)What will be the output for the following C code?
// #include <stdio.h>
// void main()
// {
//     int y = 4;
//     int x = 9 % 2 * 4 / 2;
//     printf("Value of x is %d", x);
// }
// a)Value of x is 3
// b)Value of x is 2
// c)Value of x is 1
// d)Compile-time error
// Ans-----b
// ------------------------------------------------------------------
// 2)Which of the following operator has the lowest priority?
// a) &&
// b) +
// c) *
// d) !==
// Ans-----a
// ------------------------------------------------------------------
// 3)What will be the output of the following C code?
//  #include <stdio.h>
//     void main()
//     {
//         int a = 3;
//         int b = ++a + a++ + --a;
//         printf("Value of b is %d", b);
//     }
// a) Value of x is 12
// b) Value of x is 13
// c) Value of x is 10
// d) Undefined behaviour
// Ans----b'What is output
// #include<stdio.h>
// int main()
// {
//    int a = 1;
//    int b = 1;
//    int c = a || --b;
//    int d = a-- && --b;
//    printf("a = %d, b = %d, c = %d, d = %d", a, b, c, d);
//    return 0;
// }
// a)a=0,b=1,c=1,d=0
// b)a=0,b=0,c=1,d=0
// c)a=1,b=1,c=1,d=1
// d)a=0,b=0,c=0,d=0
// Ans-----b
// ------------------------------------------------------------------
// 4) What is output
// #include <stdio.h>
// int main()
// {
//     printf("%d", sizeof(printf("ComputerScience")));
//     return 0;
// }
// a)ComputerScience4
// b)4ComputerScience
// c)ComputerScience9
// d) 4
// ans----d
// ------------------------------------------------------------------

// 5)What is the result of a logical or relational expression in C?
// a) 0 or 1
// b) True or false
// c) 0 if false and a positive number if true.
// d) T or F
// Ans------a
// ------------------------------------------------------------------
// 6)Find the Output in this Program.?
#include<stdio.h>
int main()
{

    short int i = 95;

    char c = 97;

    printf("%d, %d, %d\n", sizeof(i), sizeof(c), sizeof(c + i));

    return 0;
}
// a) 2 1 2
// b) 2 1 3
// c) 2 1 4
// d) 2 2 8
// ans-----c
// ------------------------------------------------------------------
// 7) what is output.?
//   int main()
//     {
//         int i = 5;
//         int l = i / -4;
//         int k = i % -4;
//         printf("%d %d\n", l, k);
//         return 0;
//     }
// a) Compiler error
// b) 1 -1
// c)-1 1
// d) none of above
// ans------c
// ------------------------------------------------------------------
// 8)Which of the the following takes integer operands only?
// a) +
// b) -
// c) /
// e) %
// f) none of above
// Ans-----f
// ------------------------------------------------------------------
// 9) What number will z in the sample code given below?
// int z, x = 5, y = -10, a = 4, b = 2;
// z = x++ - --y*b/a;
// a) 5
// b) 6
// c) 9
// d) 10
// e) 11
// Ans-----d
// ------------------------------------------------------------------
// 10)Which of the following operators can be used to concatenate two strings in C?
// A) +
// B) *
// C) strcat
// D) &
// Answer: C
// ------------------------------------------------------------------
// 11)#include <stdio.h>
// int main() {
//     int a = 5, b = 3;
//     printf("%d", a & b);
//     return 0;
// }
// A) 1
// B) 3
// C) 5
// D) 2
// Answer: A
// ---------------------------------------------------------------------------------------
// 12)Consider the following code:
// int a = 3, b = 4;
// int result = (a++) + (++b) - (a--);
// What is the value of result?
// a. 6
// b. 4
// c. 8
// d. 9
// Ans-----b
// ---------------------------------------------------------------------------------------
// 13)What will be the result of the following expression?
//  int b = 15, c = 5, d = 8, e = 8, a;
//   a = b>c ? 12 : d>e ? 13 : 14 ;
//   printf("%d", a);
// a) 13
// b) 14
// c) 15
// d) 12
// e) Garbage Value
// Ans-----d
// ---------------------------------------------------------------------------------------
// 14)What is the output of the following code snippet?
// void main() {
//   int c = - -2;
//   printf("c = %d", c);
// } 
// a) 1
// b) -2
// c) 2
// d) Erro
//  And ----- c
// ---------------------------------------------------------------------------------------
// 15What does the following expression evaluate to?

// #include<stdio.h>
// int main(){
// 3 + 4 * 5 / 2 - 8 % 3;
// }
// A) 5
// B) 7
// C) 10
// D) 12
// Answer: A





// =============================SET A======================
// 1)Convert Centimeter to Inches

// Write a program that takes input from the user, take some input for centimeter and convert that into inches .

// input :- 1

// output:-0.3937

// input :- 20

// output:-7.87
// -----------------------------------------------------------------------------------
// 2)Time Conversion

// Write a program to take input for seconds from the user , And convert it into Hour, Minutes , Second format.

// input:- Enter the number of seconds: 3671

// output:-3671 seconds is equivalent to 1 hours, 1 minutes, and 11 seconds.
// -----------------------------------------------------------------------------------
// 3)
// Write a program in C to input number of days. Find and display number of years, weeks, months and days.

// Input as : 390

// Output as : 1 Year, 3 Weeks, 0 Month, 4 Days

// -----------------------------------------------------------------------------------
// 4)My Bakery Shop Invoice Generator
//      Description:
// You are the owner of a bakery shop and need to create a program to generate invoices for your customers. The program should prompt the user to enter the item they want to buy, the quantity they wish to purchase, and the price of the item. Based on this input, the program should calculate the total cost and display an invoice with all the details, including the item, quantity, price per item, and total cost. At the end of the invoice, don't forget to thank the user for shopping at your bakery shop. Your task is to write a C program that accomplishes this.
// Instructions:
// ----------------
// -> Display a welcome message along with a separator line to greet the customer.

// -> Prompt the customer to enter the quantity they wish to purchase and store it in an integer variable.

// -> Get the price of the item from the customer and store it in a floating-point variable.

// -> Calculate the total cost by multiplying the price with the quantity.

// -> Display the invoice with all the details, including item, quantity, price per item, and total cost.

// -> Make sure the total cost is displayed with two decimal places.

// -> End the invoice with a thank-you message for shopping at your bakery shop.
// Sample Input
// Enter the quantity you want to purchase: 2

// Enter the price of Chocolate Cake: 250
// Sample Output
// ------ Invoice ------

// Quantity: 2

// Price per item: Rs.250

// Total cost: Rs.500
// =============================SET B======================
// Volume of a Sphere
// Develop a program to calculate the volume of a sphere and take the radiusinput from user by using scanf.
// 1)Sample Input
// Input as :
// -----------
// Welcome to Sphere Volume Calculator!

// Enter the radius of the sphere: 5
// Sample Output
// Output as :
// -----------------
// Volume of the sphere is: 523.60 cubic uni
// -----------------------------------------------------------------------------------------
// 2)Sum of Natural Number

// Write a C program to calculate the sum of natural numbers from 1 to a given positive integer by the user,take the input from the user by using scanf(). 


// Input as :

// Enter a positive integer: 10

// Expected output:

// The sum of natural numbers from 1 to 10 is: 55
// -----------------------------------------------------------------------------------------
// 3)Area of Different Shape

// Write a C program that takes 2 number as input and store that number in a variable, First input for radius of a Circle and 2nd input for side of a Square.

// Enter radius of Circle : 12

// Enter side of Square : 5

// Area of Circle is : 452.16

// Area of Square is : 25
// -----------------------------------------------------------------------------------------
// 4)Welcome to Tasty Treats Cafe: Bill Calculator
// Develop below scenario program and take all the input from the user by using scanf().
// Title: "Tasty Treats Cafe: Bill Calculator"
// Introduction:
// Welcome to Tasty Treats Cafe! We provide a delightful selection of beverages and snacks to satisfy your cravings. Today, you are our esteemed customer, and we are eager to serve you! Let's calculate your bill based on your preferences.
// Question:

// How many cups of tea, cups of coffee, and biscuits would you like to order?
// Instructions:
// Each cup of tea costs ₹15, each cup of coffee costs ₹25, and each biscuit costs ₹10.
// Please provide the quantity for each item you wish to order.
// Example:
// Customer: "I'd like to have 2 cups of tea, 1 cup of coffee, and 3 biscuits, please."
// Bill Calculation:
// 2 cups of tea × ₹15 = ₹30

// 1 cup of coffee × ₹25 = ₹25

// 3 biscuits × ₹10 = ₹30

// Total Bill:
// ₹30 (Tea) + ₹25 (Coffee) + ₹30 (Biscuits) = ₹85
// Sample Input
// How many cups of tea would you like to order? : 2
// How many cups of coffee would you like to order? : 1
// How many biscuits would you like to order? : 3
// Sample Output
// 2 cups of tea
// 1 cup of coffee
// 3 biscuits
// Total Bill Amount: ₹85
// Thank you for choosing Tasty Treats Cafe! Please

// =============================SET C======================
// 1)Reverse A Number

// Write a C program to reverse 3 digit number without using any loops. 

// input :- 786

// output:- 687
// ---------------------------------------------------------------------
// 2)ASCII Sum

// Write a C program to take two character input from the user and print the ASCII value of that two character and display its sum.

// Enter a character: a b

// ASCII value of a is : 97

// ASCII value of b is : 98

// ASCII sum of a & b is : 195
// ---------------------------------------------------------------------
// 3)Sum of Natural Number

// Write a C program to calculate the sum of natural numbers from 1 to a given positive integer by the user,take the input from the user by using scanf(). 

// Input as :

// Enter a positive integer: 10

// Expected output:

// The sum of natural numbers from 1 to 10 is: 55
// ---------------------------------------------------------------------
// 4)Shopping Of TV

// A shopkeeper buys a TV set for Rs. 3500 and sells it at a profit of 27%. Apart from this a VAT of 12.7% and Service Charge is 3.87% is charged. 

// Write a C program to Display total selling price, profit along with vat and service charge.

// Cost Price: Rs. 3500
// Selling Price: Rs. 4445.00
// Profit: Rs. 945.00
// VAT: Rs. 564.52
// Service Charge: Rs. 171.02
// Total Selling Price: Rs. 5180.54
// ---------------------------------------------------------------------


