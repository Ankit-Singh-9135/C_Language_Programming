// Que 9 : Given a sorted array of distinct integers and a target value, return the index if the target is found. If not,return the index where it would be if it were inserted in order.(Using Pointer)
// -------

// -> create int main() function.
// -> create int searchInsert(int *nums, int size, int target) //Function to find and return the index of the target or the insertion point.

// Example 1 :
// Sample input :
// nums = [1,3,5,6]
// target = 5
// Sample output : 2

// Example 2 :
// Input: nums = [1,3,5,6]
// target = 2
// Sample output: 1

// Example 3:
// Sample input :
// nums = [1,3,5,6]
// target = 7
// Sample output: 4

#include <stdio.h>
void userInput(int *, int);
int searchElement(int *, int, int);
int main()
{
  int size, target;
  printf("Enter array size : ");
  scanf("%d", &size);

  int arr[size];
  printf("Enter %d element in array!!!\n", size);
  userInput(arr, size);

  printf("Enter target element : ");
  scanf("%d", &target);

  printf("Index : %d", searchElement(arr, size, target));
  return 0;
}

void userInput(int *arr, int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("element - %d : ", i);
    scanf("%d", &arr[i]);
  }
}

int searchElement(int *arr, int size, int target)
{

  for (int i = 0; i < size; i++)
  {
    if (target == *(arr + i))
    {
      return i;
    }
    else if (target < *(arr + (i + 1)))
    {
      return i + 1;
    }
  }
  return (size - 1) + (target - arr[size - 1]);
}//search element