// Que 4 : Write a program in C to swap elements using call by reference.
// ------

// -> create int main() function.
// -> create void swap(int *a, int *b, int *c) function.
// -> in main function read value for a,b,c and call the swap fuction by passing addresses of all three variable.
// -> NOTE : print the result before swap and after swap in main funtion only and understand the use/power of pointer.

// Sample input : a = 5 , b = 6 , c = 7;

// Sample output :

// The value before swapping are :
// a = 5
// b = 6
// c = 7

// The value after swapping are :
// a = 7
// b = 5
// c = 6

#include <stdio.h>
void swap(int *a, int *b, int *c)
{
    int temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}

int main()
{
    int num1, num2, num3, *p = &num1, *q = &num2, *r = &num3;
    printf("Enter the first number1 : ");
    scanf("%d", &num1);
    printf("Enter the second number2 : ");
    scanf("%d", &num2);
    printf("Enter the second number3 : ");
    scanf("%d", &num3);
    // temp = *p;
    // *p = *r;
    // *r = *q;
    // *q = temp;

    printf("The value before swapping are :\na=%d\nb=%d\nc=%d\n", num1, num2, num3);
    swap(&num1, &num2, &num3);
    printf("The value after swapping are :\na=%d\nb=%d\nc=%d ", *p, *q, *r);

    return 0;
}