
// Finding factorial of given no.
#include<stdio.h>
int main(){
int n,f=1;
printf("Enter the no ");
scanf("%d",&n);
while(n>1){
    f=f*n;
    n--;
}
printf("Factoril=%d",f);
    
    return 0;
}