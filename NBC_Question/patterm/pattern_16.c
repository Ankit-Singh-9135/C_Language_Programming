// 1
// 23
// 456
// 78910

#include<stdio.h>
int main(){
int num,a=1;
printf("Enter the number : ");
scanf("%d",&num);
for (int i = 1; i <= num; i++)
{
    for (int j = 1; j <=i; j++)
    {
        printf("%3d",a);
        a++;
    }
    printf("\n");
}

    
    return 0;
}