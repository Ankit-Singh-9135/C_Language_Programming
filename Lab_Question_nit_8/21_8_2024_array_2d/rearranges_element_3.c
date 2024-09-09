// Write a C program that rearranges the elements of a given array by moving all the zeros to the front. The program should take an array as input and swap the positions of non-zero elements with zeros, such that all the zeros appear at the beginning of the array, while maintaining the relative order of non-zero elements.


// For example: 

// given the input array: [1, 0, 2, 0, 4, 5, 0, 3, 0]

// Expected output:

// 1 2 4 5 3 0 0 0 0

#include<stdio.h>
int main(){
int a[100],num,t;
printf("Enter array of size 1-100 : ");
scanf("%d",&num);
printf("Enter %d element : ",num);
for (int i = 0; i < num; i++)
{
    scanf("%d",&a[i]);
}
int j=0;
for (int i = 0; i <num; i++)
{
    if(a[i]!=0){
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
        j++;
    }
}
for (int i = 0; i < num; i++)
{
    printf("%2d",a[i]);
}





return 0;
}