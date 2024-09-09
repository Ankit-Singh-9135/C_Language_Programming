// Read two numbers and perform arithmetic operation using a menu with switch.

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
float a,b;
char op;
start:
puts("--------------------------------------------------------------");
printf("Enter two numbers "); 
scanf("%f %f",&a, &b);
puts("--------------------------------------------------------------");

puts("\t\t\t M E N U");
puts("--------------------------------------------------------------");
puts("\t\t\t +. Add");
puts("\t\t\t -. Sub");
puts("\t\t\t *. Mul");
puts("\t\t\t %. Mod");
puts("\t\t\t /. Div");
puts("\t\t\t E. Exit");
puts("--------------------------------------------------------------");
// flushall(); /* fflush(stdin); */
printf("\t\t\t Enter Ur option[ ]\b\b"); scanf(" %c",&op);
// gotoxy(60,18);
switch(op)
{
case '+': printf("Sum=%.2f",a+b);break;
case '-': printf("Sub=%.2f",a-b);break;
case '*': printf("Mul=%.2f",a*b);break;
case '%': printf("Mod=%.2f",fmod(a,b));break;
case '/': printf("Div=%.2f",a/b);break;
case 'e': case 'E': exit(0);break;
default: puts("Invalid Option");
}
goto start;
}