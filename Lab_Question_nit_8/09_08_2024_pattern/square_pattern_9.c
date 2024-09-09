// Write a C program to print square pattern program 



//   1 6 11 16 21

//    2 7 12 17 22

//    3 8 13 18 23

//    4 9 14 19 24

//    5 10 15 20 25

#include<stdio.h>
int main(){
int num,a;
printf("Enter the no ");
scanf("%d",&num);
for (int i = 1; i <= num; i++)
{
    a=i;
    for (int j = 1; j <=num; j++)
    {
       

        printf("%3d",a);
        a=a+num;
    }
    printf("\n");
    
}
   return 0;
}