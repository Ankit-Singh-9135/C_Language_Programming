// Write a program in C to insert New value in the array (sorted array ) at its proper respective position as its accending order.

// Test Data : 

// Input the size of array : 5 

// Input 5 elements in the array : 

// element - 0 : 1 
// element - 1 : 3 
// element - 2 : 7
// element - 3 : 8
// element - 4 : 10

// Input the value to be inserted : 6

// Expected Output : 

// The current list of the array :  1 3 7 8 10
// After Insert the element the new list is :  1 3 6 7 8 10

#include<stdio.h>
int main(){
int a[100],num;
printf("Enter array of size 1-100 : ");
scanf("%d",&num);
for (int i = 0; i < num; i++)
{
printf("Element - %d : ",i);
    scanf("%d",&a[i]);
}

    
    return 0;
}