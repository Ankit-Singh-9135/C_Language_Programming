// Finding perfect no:
// 6 factors sum is 1+2+3=6
// 28 factors sum is 1+2+4+7+14=28
// 4 factors sum is 1+2=3  not a perfect no

#include<stdio.h>
int main(){
int n,i,s=0;
printf("Enter the no ");scanf("%d",&n);
for(i=1;i<=n/2;i++)if(n%i==0)s=s+i;
printf(n==s?"prefect no":"Not a prefect no");

    
    return 0;
}

