// Que 2 : Write a C program to find all the Armstrong number in beetween 100 to 10000 by using function.
// --------

// -> create int main() function.
// -> create bool isArmstrong(int n) function
// -> create int countDigits(int n) function
// -> create int power(int base, int exp) function

// Sample input : n1 = 1 and n2 = 10000

// Sample output :
// Armstrong numbers between 100 and 10000 are:

// 153
// 370
// 371
// 407
// 1634
// 8208
// 9474

#include <stdio.h>
#include <stdbool.h>
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

bool isArmstrong(int num)
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

