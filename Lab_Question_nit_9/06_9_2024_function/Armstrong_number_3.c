// 3)Armstrong number
// Write a C program to find all the Armstrong number in beetween 100 to 10000 by using 2 different  user defined function and one main function to display all the Armstrong number in the given range.
// Sample Input
// from:100
// upto:1000
// Sample Output
// Armstrong numbers between 100 and 10000 are:

// 153

// 370

// 371

// 407

// 1634

// 8208

// 9474
// Explanation
// Armstrong number Example : 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153


#include <stdio.h>
#include <math.h>

int countDigits(int num)
{
  int count = 0;
  while (num)
  {
    num = num / 10;
    count++;
  }
  return count;
}

int isArmstrong(int num)
{
  int digit = countDigits(num);
  int sum = 0, temp = num;

  while (num)
  {
    int rem = num % 10;
    sum += pow(rem, digit);
    num = num / 10;
  }

  return (sum == temp);
}

int main()
{
  int start, end;
  printf("Enter starting point : ");
  scanf("%d", &start);
  printf("Enter ending point : ");
  scanf("%d", &end);
  printf("Armstrong numbers%d and %d :\n", start, end);
  for (int i = start; i <= end; i++)
  {
    if (isArmstrong(i))
    {
      printf("%d\n", i);
    }
  }

  return 0;
}




// ==================================

// #include <stdio.h>
// #include <math.h>
// int check_armstrong(int);
// void display(int, int);
// int digit_count(int);
// int main()
// {
//   int start, end;
//   printf("Enter starting point : ");
//   scanf("%d", &start);
//   printf("Enter ending point : ");
//   scanf("%d", &end);
//   display(start, end);
//   return 0;
// }

// void display(int start, int end)
// {
//   for (int i = start; i <= end; i++)
//   {
//     if (check_armstrong(i))
//     {
//       printf("%d ", i);
//     }
//   }
// }

// int check_armstrong(int num)
// {
//   int store_num = num, digit = digit_count(num), result = 0;

//   while (num)
//   {
//     int rem = num % 10;
//     result += pow(rem, digit);
//     num /= 10;
//   }
//   return store_num == result;
// }

// int digit_count(int num)
// {
//   int digit = 0;
//   while (num)
//   {
//     digit++;
//     num /= 10;
//   }
//   return digit;
// }