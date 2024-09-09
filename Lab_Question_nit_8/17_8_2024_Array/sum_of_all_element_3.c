// Sum of all elements
// 1 point

// Write a program in C to find the sum of all elements of the array.

// Input the number of elements to be stored in the array :3

// Input 3 elements in the array :

// element - 0 : 2

// element - 1 : 5

// element - 2 : 8

// Expected Output :

// Sum of all elements stored in the array is : 15
// #include<stdio.h>
// int main(){
// int a[20],num,sum=0;
// printf("Enter the size of array 1-10 : ");
// scanf("%d",&num);
// for (int i = 0; i < num; i++)
// {
//     printf("Element - %d : ",i);
//     scanf("%d",&a[i]);
// }
// printf("Sum of all elements stored in the array is : ");
// for (int j = 0; j < num; j++)
// {
//     sum=sum+a[j];
// }
//     printf("%d",sum);


    
//     return 0;
// }

// ================================

#include<stdio.h>
int main(){
int a[20],num,sum=0;
printf("Enter the size of array 1-10 : ");
scanf("%d",&num);
for (int i = 0; i < num; i++)
{
    printf("Element - %d : ",i);
    scanf("%d",&a[i]);
    sum=sum+a[i];
}
printf("Sum of all elements stored in the array is : %d",sum);


    
    return 0;
}