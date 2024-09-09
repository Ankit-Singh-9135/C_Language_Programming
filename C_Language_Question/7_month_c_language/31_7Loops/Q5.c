
// Find powers sum:
#include<stdio.h>
int main(){
int n,m,pwr=1,s=0;
printf("Enter the no ");
scanf("%d%d",&n,&m);
while(m>=1){
    pwr=pwr*n;
    s=s+pwr;
    m--;
}
printf("power=%d",s);
    
    return 0;
}