// 5
// 54
// 543
// 5432
// 54321


#include<stdio.h>
int main(){
int num;
printf("Enter the number : ");
scanf("%d",&num);
for (int i = num; i >=1; i--)
{
    for (int j = num; j >=i; j--)
    {
        printf("%d",j);
    }
    printf("\n");
}

    
    return 0;
}