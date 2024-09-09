// Write a C program to find the min element from an array.


// Input as :

// Enter array size : 5

// Enter 5 elements : 4 5 3 6 2

// Min element is : 2

#include<stdio.h>
int main(){
int a[100],num,min;
printf("Enter the array of size 1 - 100 :");
scanf("%d",&num);
printf("Enter the element :" );
for (int  i = 0; i < num; i++)
{
    scanf("%d",&a[i]);
}
min=a[0];
for (int i = 0; i < num; i++)
{
    
    if(min>a[i]){
       min=a[i];
       
    }
}
printf("Min=%d",min);

    
    return 0;
}


