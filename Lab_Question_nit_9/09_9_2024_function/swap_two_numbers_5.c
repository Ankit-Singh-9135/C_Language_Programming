// Que 5 : Write a program in C to swap two numberss using a function.
// -------

// -> create int main() function.
// -> create void swap(int a, int b) function.
// -> in main function read two values and call swap function and print the values before swap and after swap.

// Sample input :
//                Input 1st number : 2
//                Input 2nd number : 4

// Sample output :
//                Before swapping: n1 = 2, n2 = 4
//                After swapping: n1 = 4, n2 = 2

#include <stdio.h>
int num1, num2;//global var

void swap(int a, int b)//a=2 and b=4
{
    num1=b;
    num2=a;
}

int main()
{
    printf("Enter the num1 : ");
    scanf("%d", &num1);
    printf("Enter the num2 : ");
    scanf("%d", &num2);

    printf("Before swapping : %d  %d\n", num1, num2);
    swap(num1, num2);//2 4
    printf("After swapping : %d  %d", num1, num2);

    return 0;
}