// #include<stdio.h>
// int main(){
// int num,fact=1;
// printf("Enter the number : ");
// scanf("%d",&num);
// for (int i = 1; i <=num; i++)
// {
//     fact=fact*i;
// }
// printf("Factorial=%d",fact);

    
//     return 0;
// }

// while 

#include<stdio.h>
int main(){
int i=1,num,fact=1;
printf("Enter the number : ");
scanf("%d",&num);
while (i <=num)
{
    fact=fact*i;
    i++;
}
printf("Factorial=%d",fact);

    
    return 0;
}