// Finding lcm of given two numbers:
// 1. Using gcd:

// #include<stdio.h>
// int main(){
// int a,b,i,gcd;
// printf("Enter a b value ");
// scanf("%d %d",&a, &b);
// for(i=1;i<=a && i<=b; i++)if(a%i==0 && b%i==0)gcd=i;
// printf("LCM=%d",a*b/gcd);
    
//     return 0;
// }

// 2. Without using gcd:


#include<stdio.h>
int main(){
int a,b,max;
printf("Enter a b value ");
scanf("%d %d",&a, &b);
max=a>b?a:b;
while(max){
    if(max%a==0 && max%b==0){
        printf("LCM=%d",max);break;
    }max++;
}

    
    return 0;
}