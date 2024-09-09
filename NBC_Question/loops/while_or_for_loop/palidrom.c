#include<stdio.h>
int main(){
int num,num1,rev=0,temp;
printf("Enter the number : ");
scanf("%d",&num);
num1=num;
while (num)
{
    temp=num%10;
    rev=rev*10+temp;
    num=num/10;
}
if(num1==rev){
    printf("palidrom");
}else{
        printf("not palidrom");

}

    
    return 0;
}