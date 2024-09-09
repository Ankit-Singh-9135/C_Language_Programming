// 2) write a  c program to find the previous multiple of 100 of a given three digit ?
// input:	234
// output: 200
#include<stdio.h>
int main()
{
    int num;                   //two number
    printf("Enter the number");
    scanf("%d",&num);
    num%10>=5 && printf("%d",((num/10)+1)*10)|| printf("%d",num/10*10); //remember this formula

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