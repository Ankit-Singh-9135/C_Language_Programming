// 4) write a  c program to find the next multiple of 10 given two digit number if the given number 's last digit less than 5 then find the previous multipole of 10 and if the given number's last digit is greater than or equal to 5 then find the next multiple of 10 ?
// input:	24
// output: 20

// input:	57
// output: 60
#include<stdio.h>
int main(){
    int num;                 //two number
    scanf("%d",&num);
    num%10>=5 && printf("%d",((num/10)+1)*10)||printf("%d",num/10*10);

    //  int num;                 //third number
    // scanf("%d",&num);
    // num%100>=50 && printf("%d",((num/100)+1)*100)||printf("%d",num/100*100);

    //  int num;                 //fourth number
    // scanf("%d",&num);
    // num%1000>=500 && printf("%d",((num/1000)+1)*1000)||printf("%d",num/1000*1000);

    //  int num;                 //fifth number
    // scanf("%d",&num);
    // num%10000>=5000 && printf("%d",((num/10000)+1)*10000)||printf("%d",num/10000*10000);

}