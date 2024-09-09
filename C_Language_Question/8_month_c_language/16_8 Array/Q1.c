// Read a stu id, name, marks in 6 subjects and find the stu result using array:

// #include<stdio.h>
// void main()
// {
// int id, sub[6],tot=0,pass=1,i;
// char name[20];
// float avg;
// printf("Enter stu id "); 
// scanf("%d",&id);

// // flushall();
// printf("Enter stu name "); 
// // gets(name);
// scanf("%s",&name);
// printf("Enter 6 sub marks ");
// for(i=0;i<6;i++)

// {
//     scanf("%d",&sub[i]);
//     tot+=sub[i];
//     if(sub[i]<35)
//     pass=0;
    
// }
// avg=tot/6.0;
// printf("Id\tName\tTot\tAvg\tGrade\n");
// puts("--------------------------------------------");
// printf("%d\t%s\t%d\t%.2f\t",id,name,tot,avg);

// if(pass==0)puts("Failed");
// else if(avg>=60)puts("1st class");
// else if(avg>=50)puts("2nd class");
// else puts("3rd Class");
// }
// ============================================

#include<stdio.h>
int main(){
int id,sub[6],total=0,pass=1;
char name[20];
float avg;
printf("Enter the id ");
scanf("%d",&id);
printf("Enter the name ");
scanf("%s",&name);
printf("Enter the 6 sub marks ");
for (int i = 0; i < 6; i++)
{
    scanf("%d",&sub[i]);
    total+=sub[i];
    if(sub[i]<35){
        pass=0;
    }
    

}
avg=total/6.0;
printf("id\tName\ttotal\tavg\tgrade\n");
puts("-------------------------------------------------");
printf("%d\t%s\t%d\t%.2f\t",id,name,total,avg);

if(pass==0){
    printf("Fail");
}else if(avg>=60){
    printf("1st class");
}else if(avg>=50){
    printf("2nd class");
}else{
    printf("3rd class");
}

    return 0;
}























