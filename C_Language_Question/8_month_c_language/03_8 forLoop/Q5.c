// Finding step no.
//  1234 / 4321 <- step no
// 1245 <- not a step no

#include<stdio.h>
int main(){
long n;int r1,r2;
printf("Enter the no ");
scanf("%ld",&n);
for(r1=n%10,n=n/10;n!=0;n=n/10)
{
    r2=n%10;
    if(r1-r2==1||r2-r1==1)r1=r2;
    else{
        printf("Not a step no"); return 0;}
}
printf("Step no");

    
    return 0;
}

