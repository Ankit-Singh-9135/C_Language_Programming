// 54321
// 5432
// 543
// 54
// 5


#include<stdio.h>
int main(){
int num;
printf("Enter the number : ");
scanf("%d",&num);
for (int i = 1; i <=num; i++)
{
    for (int j = num; j >=i; j--)
    {
        printf("%d",j);
    }
    printf("\n");
}

    
    return 0;
}