// #include<stdio.h>
// int main(){
// int i,num,rev=0;
// printf("Enter the number : ");
// scanf("%d",&num);
// for ( i = num; i >=0; i--)
// {

//     printf("%d",i);
// }
//     return 0;
// }

// or?

// #include<stdio.h>
// int main(){
// int i,num,rev=0;
// printf("Enter the number : ");
// scanf("%d",&num);
// for ( i = 0; i <=num; i++)
// {
// }
// for ( i--; i >= 0; i--)
// {
//     printf("%d",i);
// }
//     return 0;
// }

// // ===while==
#include <stdio.h>
int main()
{
    int  num;
    printf("Enter the number : ");
    scanf("%d", &num);
    while (num)
    {

        printf("%d", num);
        num--;
    }
    return 0;
}

// or

// #include<stdio.h>
// int main(){
// int i=1,num;
// printf("Enter the number : ");
// scanf("%d",&num);
// while (i <=num)
// {
//     i++;
// }
// for ( i--; i >= 1; i--)
// {
//     printf("%d",i);
// }
//     return 0;
// }

