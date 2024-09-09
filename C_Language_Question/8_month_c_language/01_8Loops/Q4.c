// Finding palindrome no
// 121 reverse 121

#include<stdio.h>
int main(){
int n,m,rev=0;
printf("Enter the number ");
scanf("%d",&n);
while(n>0){
    m=n%10;
    rev=rev*10+m;
    n=n/10;
}
if(m==rev){
    printf("palindrome");
}else{
    printf("no palindrome");

}
    
    return 0;
}