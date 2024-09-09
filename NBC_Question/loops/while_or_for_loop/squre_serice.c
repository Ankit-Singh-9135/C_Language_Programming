#include<stdio.h>
int main(){
int i=1,num;
printf("Enter the number ");
scanf("%d",&num);

while (i<=num)
{
    printf("%d",i*i);
    i++;
}

    
    return 0;
}

// for loop---------------------
// #include<stdio.h>
// int main(){
// int i,num;
// printf("Enter the number :");
// scanf("%d",&num);
// for ( i = 1; i<=num; i++)
// {
//     printf("%d",i*i);
// }
// }