//  print odd and even elements
// 1 point
// Write a program in C to print separately the  odd and even integers 

// Test Data :
// Input the number of elements to be stored in the array :5

// Input 5 elements in the array :
// element - 0 : 25
// element - 1 : 47
// element - 2 : 42
// element - 3 : 56
// element - 4 : 32
// Expected Output :

// The Even elements are :42 56 32
// The Odd elements are : 25 47

#include<stdio.h>
int main(){
int a[20],num;
printf("Enter the size of array 1-10 : ");
scanf("%d",&num);
for (int i = 0; i < num; i++)
{
    printf("Element - %d :",i);
    scanf("%d",&a[i]);
}
printf("The Even elements are :");
for (int j = 0; j < num; j++)
{

    if(a[j]%2==0){
        printf("%3d",a[j]);
    }
}
printf("\nThe Odd elements are :");
for (int j = 0; j < num; j++)
{

    if(a[j]%2!=0){
        printf("%3d",a[j]);
    }
}


    
    return 0;
}
