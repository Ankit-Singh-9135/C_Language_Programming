// Write a C program that prints the elements of a given array in a specific format. The program should take an array as input and display the array elements in pairs, with each pair consisting of the first and last elements, followed by the second and second-to-last elements, and so on. If the array has an odd number of elements, the middle element should be printed alone.


// For example, given the array: [2, 5, 1, 6, 7, 9, 8, 3], the expected output should be:


// 2 3

// 5 8

// 1 9

// 6 7

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
printf(" pair the second and second-to-last elements : \n");
int t=num;
for (int i = 0; i <= num/2; i++)
{
    
  printf("{%d %d}\n",a[i],a[--num]);

}
if(num%2==1){
    printf("{%d}",a[t/2]);
}


    
    return 0;
}
