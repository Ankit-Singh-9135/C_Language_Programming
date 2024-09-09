// 5)Amicable Numbers
// Write a program to find and display all pairs of amicable numbers within a given range, by using different user defined functions.

// Amicable numbers are pairs of numbers where the sum of the proper divisors of one number is equal to the other number.
// Sample Input
// from:100
// upto:10000
// Sample Output
// Amicable pairs between 100 and 10000 are:

// (220, 284)
// (284, 220)
// (1184,1210)
// (1210,1184)
// (2620,2924)
// (2924,2620)
// (5020,5564)
// (5564,5020)
// (6232,6368)
// (6368,6232)

#include <stdio.h>
void amicablePrint(int, int);
int checkAmicable(int);
int main()
{
  int start, end;
  printf("Enter starting number : ");
  scanf("%d", &start);
  printf("Enter ending number : ");
  scanf("%d", &end);

  amicablePrint(start, end);
  return 0;
}

void amicablePrint(int start, int end)
{
  for (int i = start; i <= end; i++)
  {
    int num = checkAmicable(i);
    if (i < num && i == checkAmicable(num))
    {
      printf("(%d, %d)\n", i, num);
    }
  }
}

int checkAmicable(int num)
{
  int sum = 0;
  for (int i = 1; i < num; i++)
  {
    if (num % i == 0)
    {
      sum += i;
    }
  }

  return sum;
}