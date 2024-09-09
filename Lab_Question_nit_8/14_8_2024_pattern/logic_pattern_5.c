// Write the logic for the below program in c?



// 1

// 1  2   1

// 1  2   3   2   1

// 1  2   3   4   3   2   1

// 1  2   3   4   5   4   3   2   1

#include<stdio.h>
int main(){
int num;
printf("Enter the number ");
scanf("%d",&num);
for (int i = 1; i <= num; i++)
{
    for (int j = 1; j <=i; j++)
    {
        printf("%2d",j);
    }
    for (int j = i-1; j >= 1; j--)
    {
        printf("%2d",j);
    }
    
    printf("\n");
}

    
    return 0;
}