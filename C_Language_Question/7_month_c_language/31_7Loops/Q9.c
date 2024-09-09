// Finding first and last digits of given no 
#include<stdio.h>
int main(){
int n,r,s=0;
printf("Enter the number ");
scanf("%d",&n);
printf("Last digit=%d\n",n%10);
while(n>9||n<-9){

n=n/10;
}
printf("First digit=%d",n);
    
    return 0;
}