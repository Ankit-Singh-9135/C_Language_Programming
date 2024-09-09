// Write a logic for the following pattern in c?



//     1

//     1  2

//     3  5  8

//     13 21 34 55

#include <stdio.h>

int main() {
int num, a=0,b=1,c; 
printf("Enter the number ");
scanf("%d",&num);
 for(int i=1;i<=num;i++)
 {
     
     for(int j=1;j<=i;j++)
     {
         c=a+b;//1
         printf("%-3d",b);
         a=b;
         b=c;
         
     }
     printf("\n");
 }

    return 0;
}