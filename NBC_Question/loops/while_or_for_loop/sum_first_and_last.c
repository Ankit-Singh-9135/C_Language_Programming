// #include<stdio.h>
// int main(){
// int i,num,m,sum=0;
// printf("Enter the number : ");
// scanf("%d",&num);
// for ( i = 0; i <=num; i++)
// {

// }

// printf("sum=%d",sum);

//     return 0;
// }

#include <stdio.h> //123
int main()
{
int  num, m, sum = 0;
printf("Enter the number : ");
scanf("%d", &num);
m = num % 10; // 3
while (num>9)//1
{
    num = num / 10;

}
sum = m + num;
printf("sum=%d", sum);

    return 0;
}
