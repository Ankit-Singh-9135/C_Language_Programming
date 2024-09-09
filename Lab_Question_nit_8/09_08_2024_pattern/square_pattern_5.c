// Write a C program to print square pattern program 



// 1 0 1 0 1

// 1 0 1 0 1

// 1 0 1 0 1

// 1 0 1 0 1

// 1 0 1 0 1

#include <stdio.h>
int main()
{
    int num, i, j;
    printf("Enter the number ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num; j++)
        {
            if(j%2==0){

            printf("%d ", 0);
            }else{
                printf("%d ",1);
            }
            
        }
        printf("\n");
    }

    return 0;
}