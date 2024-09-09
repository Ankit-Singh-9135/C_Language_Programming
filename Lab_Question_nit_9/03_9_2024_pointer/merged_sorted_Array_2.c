// Que 7 : Write a c program to find the median of a merged sorted Array by using pointer and function.
// -------

// -> create int main() function.
// -> create void mergeAndSort(int *arr1, int size1, int *arr2, int size2, int *mergedArray) function.
// -> double findMedian(int *mergedArray, int totalSize) function.

// Sample input : 
// Enter the size of 1st array : 2
// Enter two element :1 3

// Enter the size of 2nd array : 1
// Enter one element :2

// Sample output : 

// After sorting Array is :1 2 3
// Median is : 2

// Sample input :  
// Enter the size of 1st array : 2
// Enter two element :1 4

// Enter the size of 2nd array : 2
// Enter two element :2 3

// Sample output : 

// After sorting Array is :1 2 3 4
// Median is : 2.5

#include <stdio.h>
void userInput(int *, int);
void mergeAndSort(int *, int, int *, int, int *);
double findMedian(int *, int);
int main()
{
  int size1, size2;
  // Taking input for 1st array
  printf("Enter 1st array size : ");
  scanf("%d", &size1);

  int arr1[size1];
  printf("Enter %d element in 1st array!!!\n", size1);
  userInput(arr1, size1);

  // Taking input for 2nd array
  printf("\nEnter 2nd array size : ");
  scanf("%d", &size2);

  int arr2[size2];
  printf("Enter %d element in 2nd array!!!\n", size2);
  userInput(arr2, size2);

  int size3 = size1 + size2;
  int mArray[size3];
  mergeAndSort(arr1, size1, arr2, size2, mArray);

  double median = findMedian(mArray, size3);
  size3 % 2 == 0 ? printf("\nMedian = %.1lf", median) : printf("\nMedian = %.0lf", median);

  return 0;
}

void mergeAndSort(int *a1, int s1, int *a2, int s2, int *mArray)
{
  int mIdx = 0;
  // 1st and 2nd array are merged
  for (int i = 0, j = 0; i < s1 || j < s2;)
  {
    *(mArray + mIdx++) = i < s1 ? *(a1 + i++) : *(a2 + j++);
  }

  // Merged array sorted
  for (int i = 0; i < mIdx - 1; i++)
  {
    for (int j = i + 1; j < mIdx; j++)
    {
      if (*(mArray + i) > *(mArray + j))
      {
        int temp = *(mArray + i);
        *(mArray + i) = *(mArray + j);
        *(mArray + j) = temp;
      }
    }
  }

  printf("\nAfter sorting array : ");
  for (int i = 0; i < mIdx; i++)
  {
    printf("%d ", *(mArray + i));
  }
}

double findMedian(int *mArray, int size)
{
  int hSize = size / 2;
  return size % 2 == 0 ? (*(mArray + hSize) + *(mArray + (hSize - 1))) / (double)2 : *(mArray + hSize);
}

void userInput(int *arr, int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("element - %d : ", i);
    scanf("%d", &arr[i]);
  }
}//