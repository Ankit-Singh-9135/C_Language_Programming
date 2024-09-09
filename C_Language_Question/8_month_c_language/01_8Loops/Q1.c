// Finding max, min digits of given no. Eg: 20923  9 max, 0 min

#include<stdio.h>
int main(){
int n,r,max=-9,min=9;
printf("Enter the number ");
scanf("%d",&n);
do{
    r=n%10;           
    if(min>r)min=r;   
    if(max<r)max=r;
    n=n/10;
}while(n!=0);
printf("min=%d, max=%d",min,max);
    
    return 0;
}