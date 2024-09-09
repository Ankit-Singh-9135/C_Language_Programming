//       1
//      121
//     12321
//    1234321
//   123454321


#include<stdio.h>
int main(){
int num;
printf("Enter the number : ");
scanf("%d",&num);
for (int i =1; i <=num; i++)
{
    for (int k = i-1; k <= num; k++)
    {
        printf(" ");
    }
    
    for (int j = 1; j <=i; j++)
    {
        printf("%d",j);
    }
     for (int j = i-1; j >=1; j--)
    {
        printf("%d",j);
    }
    printf("\n");
   
} 

return 0;
}
