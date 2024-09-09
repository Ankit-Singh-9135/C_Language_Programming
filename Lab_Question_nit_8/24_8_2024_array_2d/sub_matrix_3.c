// Write a program in C for subtraction of two Matrices. 

//  Test Data :

//  Input the size of the square matrix (less than 5): 2

//  Input elements in the first matrix :

// element - [0],[0] : 5 

// element - [0],[1] : 6 

// element - [1],[0] : 7

// element - [1],[1] : 8 


// Input elements in the second matrix :

//  element - [0],[0] : 1 

// element - [0],[1] : 2 

// element - [1],[0] : 3 

// element - [1],[1] : 4 


// Expected Output : 

// The First matrix is : 

// 5 6 

// 7 8

// The Second matrix is : 

// 1 2 

// 3 4 

// The Subtraction of two matrix is : 

// 4 4

// 4 4 



#include <stdio.h>

int main() {
   int r,c;
   printf("Enter the rows and col:");
   scanf("%d%d",&r,&c);
   int a[r][c],b[r][c];
   printf("Input first matrix:\n");
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
           printf("elements are-[%d],[%d] : ",i,j);
           scanf("%d",&a[i][j]);
       }
   }
    printf("Input second matrix:\n");
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
           printf("elements are-[%d],[%d] : ",i,j);
           scanf("%d",&b[i][j]);
       }
   }
   printf("\nFirst matrix is like as\n");

   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
         
           printf("%3d",a[i][j]);
       }
        printf("\n");
   }
    printf("\nSecond matrix is like as\n");

   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
         
           printf("%3d",b[i][j]);
       }
        printf("\n");
   }
    printf("\n Subtraction of matrix is like as\n");

   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
         
           printf("%3d",(a[i][j]-b[i][j]));
       }
       printf("\n");
   }

    return 0;
}