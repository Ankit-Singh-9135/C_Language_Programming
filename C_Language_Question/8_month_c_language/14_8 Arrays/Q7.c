// Arranging array elements in reverse order:

// #include<stdio.h>
// int main(){
// int a[100],num;
// printf("Enter array of size 1-100 ");
// scanf("%d",&num);
// printf("Enter %d element ",num);
// for (int i = 0; i < num; i++)
// {
//     scanf("%d",&a[i]);

// }
// printf("Element in reverse ");
// while(num>0){
//     printf("%3d",a[--num]);
// }


    
//     return 0;
// }

// Permanent:

#include<stdio.h>
int main(){
int a[100],num,t;
printf("Enter array of size 1-100 ");
scanf("%d",&num);
printf("Enter %d element ",num);
for (int i = 0; i < num; i++)
{
    scanf("%d",&a[i]);

}
printf("Element in reverse ");
for (int i = 0; i < num/2; i++)
{
    t=a[i];
    a[i]=a[num-i-1];
    a[num-i-1]=t;
}
printf("Element in reverse ");
for (int i = 0; i < num; i++)
{
    printf("%3d",a[i]);
}
 

    return 0;
}
