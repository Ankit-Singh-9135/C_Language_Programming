// 1)Write a C program to accept id from user and display department.(Switch Case)

// Id: 11 to 15 is Software department

//   16 to 20 is Developer department

//   21 to 23 is Management department

#include<stdio.h>
int main(){
int num;
printf("Enter the number ");
scanf("%d",&num);
switch (num)
{
case 11 ... 15 : printf("is Software department");break;
case 16 ... 20 : printf("is Developer department");break;
case 21 ... 23 : printf("is Management department");break;


default: printf("invaild number ");
    break;
}
    
    return 0;
}