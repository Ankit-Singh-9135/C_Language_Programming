// 1
// 21
// 321
// 4321
// 54321

#include<stdio.h>
int main(){
int num;
printf("Enter the number : ");
scanf("%d",&num);
for (int i = 1; i <=num; i++)
{
    for (int j = i; j >=1; j--)
    {
        printf("%d",j);
    }
    printf("\n");
}

    
    return 0;
}