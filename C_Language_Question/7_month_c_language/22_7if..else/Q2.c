// Finding voter eligibility: 
#include<stdio.h>
int main(){
    int age;
    printf("Enter the person age ");
    scanf("%d",age);
    if(age>=18){
        puts("ELIGIBLE");
    }else{
          puts(" NOT ELIGIBLE");
      
    }
}