// 2)Find the Largest Element
// Find the Largest Element: Create a program that finds the largest element in an array of integers. Implement separate functions for input, finding the largest element, and main function to displaying the result.
// Sample Input
// Input as :

// Enter array size : 6

// Enter 6 elements : 5 6 3 6 7 9
// Sample Output
// Output as :

// The largest element is : 9


#include <stdio.h>
void inputArray(int arr[], int n) {
    printf("Enter %d elements of the array \n :", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d : ", i);
        scanf("%d", &arr[i]);
    }
}

int findLargestElement(int arr[], int n) {

    int largest = arr[0]; 
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int n;
    printf("Enter the number size of array : ");
    scanf("%d", &n);
    int arr[n];

    inputArray(arr, n);
    int largest = findLargestElement(arr, n);
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}