// Que 3 : Write a C program that finds the largest element in an array of integers using function.
// --------

// -> create int main() function.
// -> create int largestEle(int arr[]) function.
// -> in main function read size of array and based on size create new array.
// -> store size elements into array and call largestEle function by passing array as input.
// -> largestEle function will perform the operation and will return largest element of array to the main function.
// -> in the main function recive the result and print the output.

// Sample input : n = 7
//                arr[]={1,100,2,3,55,3,2}

// Sample output : Largest element of array is : 100
#include <stdio.h>
int array_input(int arr[], int num)
{
    printf("Enter %d elements :", num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
}
int largestEle(int arr[], int num)
{
    int max = arr[0];
    for (int i = 1; i < num; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int num;
    printf("Enter the array of size : ");
    scanf("%d", &num);
    int arr[num];
    

    array_input(arr, num);

    int largest = largestEle(arr, num);
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}