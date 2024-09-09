// Write a C program to print square pattern program 

   

//    5 10 15 20 25

//    4 9  14 19 24

//    3 8  13 18 23

//    2 7  12 17 22

//    1 6  11 16 21

#include<stdio.h>
int main(){
int num,a;
printf("Enter the no ");
scanf("%d",&num);
for (int i = num; i >=1; i--)
{
    a=i;
    for (int j = num; j >=1; j--)
    {
       

        printf("%3d",a);
        a=a+num;
    }
    printf("\n");
    
}
   return 0;
}