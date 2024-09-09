// Write the logic for the below program in c ?

//                     1

//             4       9

//      16     25     36

// 49   64     81   100

// #include<stdio.h>
// int main(){
// int num,k=1;
// printf("Enter the no ");
// scanf("%d",&num);

// for (int i = 1; i <= num; i++)
// {
//     for (int j = 1; j <= num; j++)
//     {
//         if(num-i>=j){
//             printf("%3c",32);
//         }else{
//             printf("%3d",k*k);
//             k++;
//         }
//     }
//     printf("\n");
// }
//     return 0;
// }

// =======================================

#include <stdio.h>
int main()
{
    int num, k = 1;
    printf("Enter the no ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int s = 1; s <= num - i; s++)
        {
            // printf("%5c",32);
            printf("     ");

        }

        for (int j = 1; j <= i; j++)
        {
            printf("%5d", k * k);
            k++;
        }
        printf("\n");
    }
    return 0;
}