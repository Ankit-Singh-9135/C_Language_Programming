// Write a logic for the following pattern in c?



//     0

//     0 1 

//     0 1 1

//     0 1 1 2

//     0 1 1 2 3

#include <stdio.h>

int main() {
int num; 
printf("Enter the number ");
scanf("%d",&num);
 for(int i=1;i<=num;i++)
 {
     int a=0,b=1,c;
     for(int j=1;j<=i;j++)
     {
         c=a+b;//1
         printf("%-3d",a);
         a=b;
         b=c;
         
     }
     printf("\n");
 }

    return 0;
}