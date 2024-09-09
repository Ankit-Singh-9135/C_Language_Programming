// Write a c program for the following pattern



//    1 2 3 4 5

//    0 3 4 5 6

//    0 0 5 6 7

//    0 0 0 7 8

//    0 0 0 0 9

// #include<stdio.h>
// int main(){
// int num;
// printf("Enter the number ");
// scanf("%d",&num);
// for (int  i = 1; i <= num; i++)
// {
//     if(i!=1){
//     for (int k = 1; k < i; k++)
//     {
//         printf("%4d",0);
//     }
    
//     for (int j = i; j <= num; j++)
//     {
//         printf("%4d",(i+j)-1);
//     }
//     }else{
//         for (int i = 1; i <= num; i++)
//         {
//             printf("%4d",i);
//         }
        
//     }
//     printf("\n");
    
// }

    
//     return 0;
// }

// method 

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if (i >= j)
            {
                printf("%4d", 0);
            }
            else
            {

                printf("%4d", i + j);
            }
        }

        printf("\n");
    }

    return 0;
}