// Write a C program to print square pattern program using * 



// * * * * *

// * * * * *

// * * * * *

// * * * * *

// * * * * *

#include<stdio.h>
int main(){
int num,i,j;
printf("Enter the number ");
scanf("%d",&num);
for ( i = 1; i <=num; i++)
{
for ( j = 1; j <=num; j++)
{
    printf("* ");
}
printf("\n");

}

    
    return 0;
}