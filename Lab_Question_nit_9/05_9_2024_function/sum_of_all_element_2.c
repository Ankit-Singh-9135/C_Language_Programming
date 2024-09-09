// 2)Sum of all elements
// Create a function to calculate the sum of all elements in an integer array.
// Sample Input
// Input:

// Size of the array: 5

// Array elements: 10 20 30 40 50
// Sample Output
// Output:

// Sum of all elements in the array: 150

#include <stdio.h>
int sum_all_element(int);

int main()
{
  int num;
  printf("Enter the size of array : ");
  scanf("%d", &num);
  printf("Array %d elements : ", num);

  int sum = sum_all_element(num);
  printf("%d", sum);
  return 0;
}

int sum_all_element(int num)
{
  int a[num], sum = 0;
  for (int i = 0; i < num; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("Sum of all elements in the array : ");
  for (int i = 0; i < num; i++)
  {
    sum += a[i];
  }
  return sum;
}