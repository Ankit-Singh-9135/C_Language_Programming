// Harmonic series:
// n=5  1+1/1+1/2+1/3+1/4+1/5=3.28

#include<stdio.h>
int main(){
int n,i;float s=1;
printf("Enter the no ");
scanf("%d",&n);
printf("1+");
for(i=1;i<=n;i++)
{
    printf("1/%d+",i,s=s+1.0/i);
}
printf("\b=%.2f",s);
    
    return 0;
}