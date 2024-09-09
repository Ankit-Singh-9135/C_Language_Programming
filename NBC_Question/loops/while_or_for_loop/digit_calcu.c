// #include<stdio.h>
// int main(){
// int num,sum=0;
// printf("Enter the number : ");
// scanf("%d",&num);
// for (int  i = 0; i <= num; i++)
// {
//     sum+=i;
// }
//     printf("sum=%2d",sum);

//     return 0;
// }

// while_Loops====

// #include<stdio.h>
// int main(){
// int i=1,num,sum=0;
// printf("Enter the number : ");
// scanf("%d",&num);
// while(i<=num)
// {
//     sum+=i;
//     i++;
// }
//     printf("sum=%2d",sum);

//     return 0;
// }

// ====do while===

#include <stdio.h>
int main()
{
    int i = 1, num, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    do
    {
        sum += i;
        i++;
    } while (i <= num);
    printf("sum=%2d", sum);

    return 0;
}