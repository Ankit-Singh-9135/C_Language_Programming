// 2)Write a C program to find the maximum between two numbers using Switch statement.
// #include<stdio.h>
// int main(){
// int num1,num2;
// printf("Enter the num1 ");
// scanf("%d",&num1);
// printf("Enter the num2 ");
// scanf("%d",&num2);
// switch (num1>num2)
// {
// case 1: printf("num1 maximum");
//     break;

// default:printf("num2 maximum");
//     break;

// }   
//     return 0;
// }


#include<stdio.h>
int main(){
int num1,num2;
char ch;
printf("Enter the num1 ");
scanf("%d",&num1);
printf("Enter the num2 ");
scanf("%d",&num2);
printf("Enter the chooses ");
scanf(" %c",&ch);
switch (ch)

{

case 1: if(num1>num2){
    printf("num1 maximum");
}else if(num2>num1){
    printf("num2 maximum");
}else{
    printf(" maximum equel");
}
}

    
    return 0;
}