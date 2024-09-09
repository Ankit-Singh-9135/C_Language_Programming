#include<stdio.h>
int main(){
int i=1,x,num;
printf("Enter the number ");
scanf("%d",&x);
printf("Enter the number ");
scanf("%d",&num);

while (i<=num)
{
    printf("%d",x/i);
    i++;
}

    
    return 0;
}

// for loop---------------------
// #include<stdio.h>
// int main(){
// int x,num;
// printf("Enter the number :");
// scanf("%d",&x);
// printf("Enter the number :");
// scanf("%d",&num);
// for (int i = 1; i<=num; i++)
// {
//     printf("%d",x/i);
// }
// }