// Write a C program to remove all occurrences of a specific element from a given array of integers. The program should display the resulting array after removing the element.


// Test Data :

// Input the size of array : 10

// Input 10 elements in the array : 

// 3 2 5 6 2 7 9 2 2 1


// Input the element that you want to delete: 2


// Expected Output : 

// The new list is : 3 5 6 7 9 1

#include<stdio.h>
int main(){
int a[100],num,k;
printf("Enter array of size 1-100 : ");
scanf("%d",&num);
printf("Enter %d element ",num);
for (int i = 0; i < num; i++)
{
    scanf("%d",&a[i]);
}
for (int i = 0; i < num; i++)
{
    for (int j =i+1 ; j < num; j++)    {
        if(a[i]==a[j]){
            
            for (num--, k = j; k <num ; k++)
            {
                a[k]=a[k+1];
            }
            j--;
        }
    }
    
}
printf("Element are ");
for (int i = 0; i < num; i++)
{
    printf("%d",a[i]);
}    
    return 0;
}
// ye coding sahi nahi hai 