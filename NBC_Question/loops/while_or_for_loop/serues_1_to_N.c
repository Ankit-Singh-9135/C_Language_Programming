//  While loop

// #include<stdio.h>
// int main(){
// int i=1,num;
// printf("Enter the number :");
// scanf("%d",&num);
// while(i<=num){
//     printf(" %3d",i);
//     i++;
// }

//     return 0;
// }

// ------------------------------------

// for loop

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("%d", i);
    }
    return 0;
}
