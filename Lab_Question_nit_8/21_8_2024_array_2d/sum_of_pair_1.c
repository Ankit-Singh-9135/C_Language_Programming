
// Write a C program that finds pairs in an array whose sum is 15.

// Test Data :

// Input the size of array : 12

// Input 8 elements in the array :

// 2 4 6 7 8 9 10 11 12 13 14 16

// Expected output :

// (2, 13)
// (4, 11)
// (6, 9)
// (7, 8)
#include<stdio.h>
int main(){
int a[100],num;
printf("Enter array of size 1-100 : ");
scanf("%d",&num);
printf("Enter %d element : ",num);
for (int i = 0; i < num; i++)
{
    scanf("%d",&a[i]);
}
printf("two pair of array sum is 15 : \n");
for (int i = 0; i < num; i++)
{
    for (int j = i+1; j <= num; j++)
    {
        if(a[i]+a[j]==15){
            printf("{%d %d}\n",a[i],a[j]);
        }
    }
    
}


    
    return 0;
}
