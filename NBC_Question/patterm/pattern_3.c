// 12345
// 2345
// 345
// 45
// 5

#include<stdio.h>
int main(){
int num;
printf("Enter the number : ");
scanf("%d",&num);
for (int i = 1; i <=num; i++)
{
    for (int j = i; j <=num; j++)
    {
        printf("%d",j);
    }
    printf("\n");
}

    
    return 0;
}