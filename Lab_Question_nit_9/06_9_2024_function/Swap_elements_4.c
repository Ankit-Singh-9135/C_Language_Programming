// 4)Swap elements
// Program to swap all elements of two integer arrays using user define function in C.
// Sample Input
// Input as :

// Enter array size : 6

// Enter 6 elements for 1st array : 1 2 3 4 5 6

// Enter 6 elements for 2nd array : 7 8 9 0 1 2
// Sample Output
// After swapping :

// 1st array : 7 8 9 0 1 2

// 2nd array : 1 2 3 4 5 6

#include <stdio.h>
void inputArray(int arr[], int num)
{
    printf("Enter %d elements of the array!!!\n", num);
    for (int i = 0; i < num; i++)
    {
        printf("Element %d : ", i);
        scanf("%d", &arr[i]);
    }
}

void swap(int arr1[], int arr2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

void arrayPrint(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int num1, num2;
    printf("Enter the first size of array  : ");
    scanf("%d", &num1);
    int arr1[num1];
    inputArray(arr1, num1);

    printf("Enter the second size of array  : ");
    scanf("%d", &num2);
    int arr2[num2];
    inputArray(arr2, num2);

    printf("\nBefore Swapping!!!");
    printf("\n1st array : ");
    arrayPrint(arr1, num1);
    printf("\n2nd array : ");
    arrayPrint(arr2, num2);
    swap(arr1, arr2, num1);
    printf("\nAfter Swapping!!!");
    printf("\n1st array : ");
    arrayPrint(arr1, num1);
    printf("\n2nd array : ");
    arrayPrint(arr2, num2);

    return 0;
}

// #include <stdio.h>
// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int main()
// {
//     int a = 5, b = 7;
//     printf("Before fun call a=%d, b=%d\n",a, b);
//     swap(a, b);
//     printf("After fun call a=%d, b=%d", a, b);

// }