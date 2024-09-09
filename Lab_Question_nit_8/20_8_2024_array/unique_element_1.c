// Write a program in C to print all unique elements in an array. 
// Test Data :
// Print all unique elements of an array:

// ------------------------------------------
// Input the number of elements to be stored in the array: 4

// Input 4 elements in the array :
// element - 0 : 3
// element - 1 : 2
// element - 2 : 2
// element - 3 : 5

// Expected Output :
// The unique elements found in the array are: 3 5

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
printf("Element print : ");
for (int j = 0; j < num; j++)
{
    printf("%3d",a[j]);
}
printf("\nThe unique elements found in the array are: ");
for (int i = 0; i < num; i++)
{
    int c=0;
    for (int j = 0; j < num; j++)
    {
        if(a[i]==a[j]){
            c++;
        }
    }

    if(c==1){
        printf("%3d",a[i]);
    }
    
}


    
    return 0;
}

