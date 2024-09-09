// 54321
// 4321
// 321
// 21
// 1

#include<stdio.h>
int main(){
int num;
printf("Enter the number : ");
scanf("%d",&num);
for (int i = num; i >=1; i--)
{
    for (int j = i; j >=1; j--)
    {
        printf("%d",j);
    }
    printf("\n");
}

    
    return 0;
}