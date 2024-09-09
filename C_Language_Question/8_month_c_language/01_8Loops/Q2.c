// Finding no of even/odd/zero digits in given no 
#include<stdio.h>
int main(){
int n,r,e,o,z;
printf("Enter the number ");
scanf("%d",&n);
e=o=z=0;
do{
    r=n%10;
    if(r==0){
        z++;
    }else if(r%2==0){
        e++;
    }else{
         o++;
    }
    n=n/10;
    
}while(n!=0);
printf("%d Even, %d Odd, %d Zero",e,o,z);
    return 0;
}