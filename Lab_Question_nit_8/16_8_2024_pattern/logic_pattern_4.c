//  1 2 3 4 5

//   2 3 4 5 1

//   3 4 5 1 2

//   4 5 1 2 3

//   5 1 2 3 4
#include<stdio.h>
int main(){
int num;
printf("Enter the number ");
scanf("%d",&num);
for (int i = 1; i <=num; i++)
{
    for (int j =i ; j <=num; j++)  
     {
        printf("%2d",j);
    }
     for (int j =1 ; j < i; j++)  
     {
        printf("%2d",j);
    }
    printf("\n");
}

    
    return 0;
}