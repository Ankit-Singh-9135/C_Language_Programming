// Que 3 : Write a program in C to store n elements in an array and print the elements using a pointer.
// -------

// Sample input :

// Input the number of elements to store in the array :5

// Input 5 number of elements in the array :

// element - 0 : 5
// element - 1 : 7
// element - 2 : 2
// element - 3 : 9
// element - 4 : 8

// Sample output :
// The elements you entered are :

// element - 0 : 5
// element - 1 : 7
// element - 2 : 2
// element - 3 : 9
// element - 4 : 8
#include <stdio.h>
int main()
{
    int arr[50], num, *p = &arr;
    printf("Enter the array of size : ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("Element of array - %d : ", i);
        scanf("%d", &arr[i]);
    }
    puts("---------------------------------------------------");
    printf(" The elements you entered are :\n ");
    for (int i = 0; i < num; i++)
    {
        printf("element - %d : ", i);
        printf("%d\n", *(p + i));
    }

    return 0;
}
