// Write a C program to find the max element from an array.


// Input as :

// Enter array size : 5

// Enter 5 elements : 4 5 3 6 2

// Man element is : 6

#include<stdio.h>
int main(){
int a[100],num,max;
printf("Enter the arrays of size 1- 100 :");
scanf("%d",&num);
printf("Enter %d element :",num);
for (int i = 0; i < num; i++)
{
    scanf("%d",&a[i]);
}
max=a[0];
for (int i = 0; i < num; i++)
{
       if(max<a[i]){
       max=a[i];
       
    }
    
}
printf("max=%d",max);


    
    return 0;
}