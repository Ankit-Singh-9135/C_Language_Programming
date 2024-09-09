// Write a program in C to count the frequency of each element of an array.

// Test Data :

// Input the number of elements to be stored in the array :6

// Input 6 elements in the array :

// element - 0 : 25
// element - 1 : 12
// element - 2 : 43
// element - 3 : 43
// element - 4 : 25
// element - 5 : 15

// Expected Output :

// The frequency of all elements of an array :

// 25 occurs 2 times
// 12 occurs 1 times
// 43 occurs 2 times
// 15 occurs 1 times

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

