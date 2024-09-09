#include<stdio.h>
int main(){
int num,num1,arm=0,temp;
printf("Enter the number : ");
scanf("%d",&num);
num1=num;
while (num)
{
    temp=num%10;
    arm=arm+(temp*temp*temp);
    num=num/10;
}
if(num1==arm){
    printf(" %d == %d so it is Aram_strong",num1,arm);
}else{
        printf(" %d != %d s0 it is not Aram_strong",num1,arm);

}

    
    return 0;
}