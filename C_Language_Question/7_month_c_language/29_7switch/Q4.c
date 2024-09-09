// Hotel bill generation: 

#include<stdio.h>
#include<conio.h>
int main()
{
int op; 
float qty, price,amt=0;
start:
puts("--------------------------------------------------------------");
puts("\t\t\t HOTEL SAI BALAJI");
puts("\t\t\t AMEERPET - HYD ");
puts("--------------------------------------------------------------");
puts("\t\t\t 1. Tea - 10/-");

puts("\t\t\t 2. Coffee/Milk/Boost/Lemon Tea/Water Bottle - 20/-");
puts("\t\t\t 3. Idly/Upma/Bonda/Poha/Plain Dosa - 30/-");
puts("\t\t\t 4. Onion/Masala/ Sambar idly/poori - 40/-");
puts("\t\t\t 5. Sambar wada / Paneer Dosa / Veg Biryani - 50/-");
puts("\t\t\t 6. Bill");
puts("\t\t\t 7. Cancel");
puts("\t\t\t 8. Close");
puts("--------------------------------------------------------------");
printf("\t\t\t Enter Ur option[ ]\b\b"); scanf("%d",&op);
if(op>=1 && op<=5){printf("Enter quantity "); scanf("%f",&qty);}
switch(op)
{
case 1: amt = amt + qty * 10; break;
case 2: amt = amt + qty * 20; break;
case 3: amt = amt + qty * 30; break;
case 4: amt = amt + qty * 40; break;
case 5: amt = amt + qty * 50; break;
case 6: printf("Ur billed amount is %.2f",amt); getch();amt=0;break;
case 7: printf("Ur order cancelled"); 
getch(); amt=0;break;
case 8: return 0;
default: puts("Invalid Option");
}
goto start;
}