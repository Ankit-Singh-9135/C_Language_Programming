// 5
// 45
// 345
// 2345
// 12345

#include<stdio.h>
int main(){
int num;
printf("Enter the number : ");
scanf("%d",&num);
for (int i = num; i >=1; i--)
{
    for (int j = i; j <=num; j++)
    {
        printf("%d",j);
    }
    printf("\n");
}

    
    return 0;
}