// Write a logic for the following pattern in c?



//     A 

//     B A

//     C B A

//     D C B A

//     E D C B A
#include<stdio.h>
    int main(){
    int num;
    printf("Enter the number ");
    scanf("%d",&num);
    for (int i = 1; i <=num; i++)
    {
        for (int j = i; j >=1; j--)
        {
            printf("%3c",64+j);
        }
        printf("\n");
        
    }
    
        
        return 0;
    }