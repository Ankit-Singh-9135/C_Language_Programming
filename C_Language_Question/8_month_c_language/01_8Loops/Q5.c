
// Printing the below output.

#include<stdio.h>
int main(){
int n;
printf("Enter the no ");
scanf("%d",&n);
if(n<0) printf("-",n=-n);
do{
    if(n>9 && n%100 < 10){
        printf("0");
    }else{
        printf("%d  ",n%100);
        n=n/100;
    }
}while(n!=0);
    
    return 0;
}