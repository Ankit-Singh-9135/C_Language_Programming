//  Display Array in Reverse Order
// 1 point

// Write a program in C to read n number of values in an array and display it in reverse order.

// Input the number of elements to store in the array :3

// Input 3 number of elements in the array :

// element - 0 : 2
// element - 1 : 5
// element - 2 : 7

// Expected Output :

// The values store into the array are : 2 5 7
// The values store into the array in reverse are : 7 5 2
#include<stdio.h>
int main(){
int a[20],num,m;
printf("Enter the size of array 1-10 ");
scanf("%d",&num);
for (int i = 0; i < num; i++)
{
    printf("Element - %d :",i);
    scanf("%d",&a[i]);
}
printf("The values store into the array are :");
for (int j = 0; j < num; j++)
{
    printf("%2d",a[j]);
}
printf("\nThe values store into the array in reverse are :");
for ( ; num>0; )
{
    printf("%2d",a[--num]);

} 
    return 0;
}