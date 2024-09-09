// #include<stdio.h>
// int main(){
// int num,sum=0;
// printf("Enter the number : ");
// scanf("%d",&num);
// for (int i = 2; i <=num; i+=2)
// {
//    sum+=i;
// }
//    printf("Even=%d",sum);


    
//     return 0;
// }

// ===while===

// #include<stdio.h>
// int main(){
// int i=2,num,sum=0;
// printf("Enter the number : ");
// scanf("%d",&num);
// while( i <=num)
// {
//    sum+=i;
//    i+=2;
// }
//    printf("Even=%d",sum);


    
//     return 0;
// }

// ======do while===

#include<stdio.h>
int main(){
int i=2,num,sum=0;
printf("Enter the number : ");
scanf("%d",&num);
do
{
   sum+=i;
   i+=2;
}
while( i <=num);
   printf("Even=%d",sum);


    
    return 0;
}