// Write a C program that takes a number as input from the user and determines whether it is a spy number of not, DEVELOP this by using while loop.

// A Spy number is a number where the sum of its digits is equal to its product of its digits.



// For Example : 

// 1124 is a spy number , because the sum of its digits is 1+1+2+4 = 8 and product of its digits is equal to 1*1*2*4 = 8..

#include<stdio.h>
int main(){
int num,sum=0,store_num,prod=1,mod;
printf("Enter the number ");
scanf("%d",&num);
store_num=num;
while(num!=0){

      mod=num%10;
      prod=prod*mod;
      sum=sum+mod;
      num=num/10;
}
if(prod==sum){
    printf("%d is a spy number",store_num);
}else{
    printf("%d is a not spy number ",store_num);

}

    
    return 0;
}