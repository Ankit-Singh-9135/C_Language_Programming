// Write a C program to print square pattern program 

//   1 1 2 1 3 1

//   1 2 2 2 3 2

//   1 3 2 3 3 3 

//   1 4 2 4 3 4

//   1 5 2 5 3 5

#include<stdio.h>
int main(){
int num,a;
printf("Enter the no ");
scanf("%d",&num);
for (int i = 1; i <= num; i++)
{
    a=1;
    for (int j = 1; j <=num; j++)
    {
        if(j%2!=0){
            printf("%3d",a);
            a++;
        }else{

        printf("%3d",i);
        }
    }
    printf("\n");
    
}
   return 0;
}
