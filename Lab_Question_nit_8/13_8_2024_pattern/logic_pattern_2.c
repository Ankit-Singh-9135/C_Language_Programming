// Write a logic for the following pattern in c?



// 	  1

//     2  3

//     3  4  5

//     4  5  6  7

//     5  6  7  8  9

#include<stdio.h>
    int main(){
    int num;
    printf("Enter the number ");
    scanf("%d",&num);
    for (int i = 1; i <=num; i++)
    {
        int a=i;
        for (int j = 1; j <=i; j++)
        {
            printf("%3d",a);
            a++;
        }
        printf("\n");
        
    }
    
        
        return 0;
    }