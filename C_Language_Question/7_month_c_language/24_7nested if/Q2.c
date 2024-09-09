// ELECTRICITY BILL GENERATION 

// DOMESTIC SLAB SYSTEM

// UNITS UNIT PRICE
// 1-50 1.45
// 51-100 2.8
// 101-200 3.05
// 201-300 4.75
// 301-500 6
// >500 6.25
// 30U  30*1.45=43.50
// 80U  50*1.45 + 30*2.8=156.5
// 180U  50*1.45+50*2.8+80*3.05=456.5
// 280U  50*1.45+50*2.8+100*3.05+80*4.75=897.5
// 480  50*1.45+50*2.8+100*3.05+100*4.75+180*6=2072.5
// 580U  50*1.45+50*2.8+100*3.05+100*4.75+200*6 +
// 80*6.25=2692.5
#include<stdio.h>
void main()
{
long serno, pre, cur,units;
char name[20];
float amt;

printf("Enter service no "); scanf("%ld",&serno);
fflush(stdin);
printf("Enter consumer name "); gets(name);
printf("Enter previous month reading "); scanf("%ld",&pre);
current:
printf("Enter current month reading "); scanf("%ld",&cur);
if(cur<pre){puts("\aCheck current month reading"); goto current;}
units = cur - pre;
if(units<=50) amt = units * 1.45;
else if(units<=100) amt = 50*1.45 + (units-50)*2.8;
else if(units<=200) amt = 50*1.45+50*2.8+(units-100)*3.05;
else if(units<=300) amt = 50*1.45+50*2.8+100*3.05+(units-200)*4.75;
else if(units<=500) amt = 50*1.45+50*2.8+100*3.05+100*4.75+(units- 300)*6;
else amt = 50*1.45+50*2.8+100*3.05+100*4.75+200*6+(units- 500)*6.25;
if(amt<50)amt=50;
printf("Amount=%.2f",amt);
}