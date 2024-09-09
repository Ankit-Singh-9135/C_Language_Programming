// Write a program in C to delete an element at desired position from an array. 


// Test Data : 

// Input the size of array : 5 

// Input 5 elements in the array in ascending order: 

// element - 0 : 1 
// element - 1 : 2 
// element - 2 : 3 
// element - 3 : 4 
// element - 4 : 5 

// Input the position which to delete: 3 
// Expected Output : 
// The new list is : 1 2 4 5 

#include<stdio.h>
int main(){
int a[100],num,t;
printf("Enter array of size 1-100 : ");
scanf("%d",&num);
for (int i = 0; i < num; i++)
{
printf("Element - %d : ",i);
    scanf("%d",&a[i]);
}
for (int i = 0; i <= num-2; i++)
{
    for (int j = 0; j <=num-i-2; j++)
    {
        if(a[i]>a[j]){
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    } 
}
    printf("sorted array : ");
    for (int i = 0; i < num; i++)
    {
        printf("%d",a[i]);
    }

    
    return 0;
}