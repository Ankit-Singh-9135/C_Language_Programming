// Read a stu id, name, marks in 6 subjects and
// find the stu result using array:
#include<stdio.h>
int main()
{
int id, sub[6],tot=0,pass=1,i;
char name[20];
float avg;
printf("Enter stu id "); 
scanf("%d",&id);

// flushall();
fflush(stdin);
printf("Enter stu name "); 
gets(name);
// scanf("%s",&name);
printf("Enter 6 sub marks ");
for(i=0;i<6;i++)

{
    scanf("%d",&sub[i]);
    tot+=sub[i];
    if(sub[i]<35)
    pass=0;
}
avg=tot/6.0;
puts("Id\tName\tTot\tAvg\tGrade");
puts("------------------------------------------------------------------ ");
printf("%d\t%s\t%d\t%.2f\t",id,name,tot,avg);

if(pass==0)puts("Failed");
else if(avg>=60)puts("1st class");
else if(avg>=50)puts("2nd class");
else puts("3rd Class");
return 0;
}