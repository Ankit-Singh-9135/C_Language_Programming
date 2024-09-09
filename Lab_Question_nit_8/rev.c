// #include<stdio.h>
// int main(){
// int num,y,m,w,d;
// printf("Enter the no ");
// scanf("%d",&num);
// // y=num/365;
// // m=num%365/30;
// // w=num%365%30/7;
// // d=num%365%30%7;

// y=num/365;
// num=num%365;
// m=num/30;
// num=num%30;
// w=num/7;
// d=num%7;

// printf("baby age %d years %d month %d weeks %d day",y,m,w,d);
    
//     return 0;
// }

// ===============================

// #include<stdio.h>
// int main(){
// int day,y,m,w,d;
// printf("Enter the no ");
// scanf("%d%d%d%d",&y,&m,&w,&d);

// day=y*365+m*30+w*7+d;

// printf("baby age  %d day",day);
    
//     return 0;
// }
// ================================

// #include<stdio.h>
// int main(){
// float c,f;
// printf("Enter the no ");
// scanf("%f",&c);
// f=c*(9.0/5)+32;
// printf("%.1f%c celsise is %.1f%c fahrenheit",c,248,f,248);
    
//     return 0;
// }

// ============================
// #include<stdio.h>
// int main(){
// float c,f;
// printf("Enter the no ");
// scanf("%f",&f);
// c=(f-32)*5/9;
// printf("%.1f%c fahrenheit  is %.1f%c celsise",f,248,c,248);
    
//     return 0;
// }

// =========================

// #include<stdio.h>
// int main(){
// float p,r,si,tot;
// int t;
// printf("Enter the no ");
// scanf("%f %d %f",&p,&t,&r);
// si=p*t*r/100;
// tot=p+si;
// printf("simpal interest=%.2f, total=%.2f",si,tot);
    
//     return 0;
// }
// ================================

// #include<stdio.h>
// int main(){
// int a=1,b=5,c=20;
// if (a++)b++, c++;printf("a=%d, b=%d, c=%d",a,b,c);
    
//     return 0;
// }


// #include<stdio.h>
// int main(){
// int i=1;
// abc:
// if(i<=10)
// {
//     printf("%d\n",i);
//     i++;
//     goto abc;
// }
    
//     return 0;
// }

#include<stdio.h>
int main(){
int num;
printf("Enter the amount ");
scanf("%d",&num);
if(num/500>=0)printf("%d-500'note\n",num/500);num=num%500;
if(num/200>=0)printf("%d-200'note\n",num/200);num=num%200;
if(num/100>=0)printf("%d-100'note\n",num/100);num=num%100;
if(num/50>=0)printf("%d-50'note\n",num/50);num=num%50;
if(num/20>=0)printf("%d-20'note\n",num/20);num=num%20;
if(num/10>=0)printf("%d-10'coin\n",num/10);num=num%10;
if(num/5>=0)printf("%d-5'coin\n",num/5);num=num%5;
if(num/2>=0)printf("%d-2'coin\n",num/2);num=num%2;
if(num/1>=0)printf("%d-1'coin\n",num/1);num=num%1;
}
    