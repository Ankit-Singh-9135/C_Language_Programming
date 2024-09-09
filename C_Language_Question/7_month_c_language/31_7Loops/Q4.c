// Finding power using user defined program
#include<stdio.h>
int main(){
int n,m,pwr=1;
printf("Enter the no ");
scanf("%d%d",&n,&m);
while(m>=1){
    pwr=pwr*n;
    m--;
}
printf("power=%d",pwr);
    
    return 0;
}