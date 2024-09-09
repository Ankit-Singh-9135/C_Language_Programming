// Decimal to binary conversion:
// 20  0000 0000 0001 0100

// #include<stdio.h>
// int main(){
// int a[16]={0},i,n;
// printf("Enter the no ");
// scanf("%d",&n);
// for ( i = 0; n!=0; i++,n=n/2)
// {
//     a[i]=n%2;
// }
// printf("Binary code ");
// for (int i = 15; i >=0 ; i--)
// {
//     printf("%2d",a[i]);
// }
    
//     return 0;
// }

// ========================================= 

// Decimal to octal:

// #include<stdio.h>
// int main(){
// int a[16]={0},i,n;
// printf("Enter the no ");
// scanf("%d",&n);
// for ( i = 0; n!=0; i++,n=n/8)
// {
//     a[i]=n%8;
// }
// printf("Octal code ");
// for (int i = 15; i >=0 ; i--)
// {
//     printf("%2d",a[i]);
// }
    
//     return 0;
// }
// =========================================== 
// Hexadecimal:

#include<stdio.h>
int main(){
int a[16]={0},i,n;
printf("Enter the no ");
scanf("%d",&n);
for ( i = 0; n!=0; i++,n=n/16)
{
    a[i]=n%16;
}
printf("Hexadecimal code ");
for (int i = 15; i >=0 ; i--)
{
    if(a[i]>10){
    printf("%2c",87+a[i]);

    }else{
        printf("%2d",a[i]);
    }
}
    
    return 0;
}