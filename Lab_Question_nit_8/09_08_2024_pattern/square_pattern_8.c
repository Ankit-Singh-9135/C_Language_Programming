// Write a C program to print square pattern program 

// 1 2   3    4    5 

// 2 4   6    8   10

// 3 6   9   12  15

// 4 8  12  16  20

// 5 10 15 20  25

#include<stdio.h>
int main(){
int i,j;
for ( i = 1; i <= 5; i++)
{
    for ( j = 1; j <= 5; j++)
    {
        printf("%d ",i*j);
    }
    printf("\n");
}

    
    return 0;
}