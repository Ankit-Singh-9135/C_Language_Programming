// #include<stdio.h>
// int main(){
// int num;
// printf("Enter the number : ");
// scanf("%d",&num);
// if(num>0){
//     printf("is Positive");
// }
// if(num<0){
//     printf("is Negitive");
// }
// if(num==0){
//     printf("is Zero");
// }

//     return 0;
// }

// methord 2

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("is Positive");
    }
    else if (num < 0)
    {
        printf("is Negitive");
    }
    else
    {
        printf("is Zero");
    }

    return 0;
}