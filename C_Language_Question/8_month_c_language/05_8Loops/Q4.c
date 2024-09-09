// Finding gcd / hcf:
// 4 divisible with 1, 2, 4
// 6 divisible with 1, 2, 3, 6
// 2 is gcd / hcf of 4 and 6

#include<stdio.h>
int main(){
int a,b,i,gcd;
printf("Enter a b value ");
scanf("%d %d",&a, &b);
for(i=1;i<=b;i++)if(a%i==0 && b%i==0)gcd=i;
printf("gcd=%d",gcd);
    
    return 0;
}