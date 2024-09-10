// Que 3 : Write a C program to calculate the sum of all elements in an integer array using function.


// -> create int main() function.
// -> create int arraySum(char str[]) function. this function will take integer array as input in parameter and will return the total sum as result.
// -> in main function read size of array , then based on size create new array and store the values.
// -> call the arraySum function and print the sum which is return by arraySum function.


// Sample input:
//               Size of the array: 5
//               Array elements: 10 20 30 40 50


// Sample output: Sum of all elements in the array: 150

#include <stdio.h>


int arraySum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int num;

    printf("Enter the size of the array: ");
    scanf("%d", &num);

    int arr[num];

    printf("Enter %d elements: ", num);
    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = arraySum(arr, num);
    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}