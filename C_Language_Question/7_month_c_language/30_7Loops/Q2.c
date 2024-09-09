// Finding 1..n number sum and avg[mean] 
// n=4 -> 1+2+3+4=10 -> 10/4=2.5<-avg

#include<stdio.h>
int main(){
    int n,i=1,s=0;
    printf("Enter the number ");
    scanf("%d",&n);
    while(i<=n){
        s=s+i;
        i++;
               
    }
    printf("Sum=%d, Avg=%.2f",s,(float)s/n);

}