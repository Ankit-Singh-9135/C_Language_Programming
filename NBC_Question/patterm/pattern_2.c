// 12345
// 1234
// 123
// 12
// 1


#include<stdio.h>
int main(){
int num;
printf("Enter the number : ");
scanf("%d",&num);
for (int i = num; i >=1; i--)
{
    for (int j = 1; j <=i; j++)
    {
        printf("%d",j);
    }
    printf("\n");
}

    
    return 0;
}