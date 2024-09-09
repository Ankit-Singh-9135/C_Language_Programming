// Read a stu id, name, 6 sub marks, tot, avg and grade using below table.

// Avg                         grade
// >=75                     Distinction
// >=60                     1st class
// >=50                     2nd class
// >=35                     3rd class
// <35                        Fail

#include<stdio.h>
int main(){
int   id,telagu,english,hindi,math,science,sansakrit,total;
char name[20];
float avg;
printf("Enter the id no ");
scanf("%d",&id);
printf("Enter the name ");
scanf("%s",&name);
printf("Enter 6 sub marks :");
scanf("%d%d%d%d%d%d",&telagu,&english,&hindi,&math,&science,&sansakrit);
total=telagu+english+hindi+math+science+sansakrit;
avg=total/6.0;
puts("Id\tName\tTotal\tAverage\tGrade");
puts("-------------------------------------------------------");
printf("%d\t%s\t%d\t%.2f\t",id,name,total,avg);
if(telagu>=35 && english>=35 && hindi>=35 && math>=35 && science>=35 && sansakrit>=35){
    if(avg>=75){
        puts("Distinction");
    }else if(avg>=60){
        puts("1st Class");
    }else if(avg>=50){
        puts("2nd Class");
    }else{
        puts("3rd class");
    }
}else{
    puts("Faild");
}
    
    return 0;
}