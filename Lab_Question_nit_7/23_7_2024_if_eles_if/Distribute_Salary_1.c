// 1)Distribute Salary
// Write a c program to calculate the salary and based on that salary calculate the tax for the person

// based on their designation by following few rules which are below

// * 3 Type of Designation are there name as

//  -> Developer

//  (Indicated by D or d)

//  -> Trainer

//  (Indicated by T or t)

//  -> Manager

//  (Indicated by M or m)

// [Note - For wrong designation print a message as "Invalid input".

// * 3 Type of Extra Allowance are there which will be added in the salary

//  Home Allowance  =10000

//  Food Allowance  =3000

//  Travel Allowance =10000

// * If the designation is Developer There salary will be calculated by adding

//  Total Salary= Salary + Home Allowance

//  If the designation is Trainer There salary will be calculated by adding

//  Total Salary= Salary + Home Allowance + Food Allowance

//  If the designation is Manager There salary will be calculated by adding

//  Total Salary= Salary + Home Allowance + Food Allowance + Travel Allowance

// * If the Total Salary is greater than 40000 then calculate the tax as 10% from the total salary

//  else 5% of total salary

// [note: Take the Designation and salary from the user and based on the that

//     calculate Total Salary and also based on Total Salary calculate the tax].
// Sample Input
// Enter your designation (D/d for Developer, T/t for Trainer, M/m for Manager): D
// Enter your base salary: 35000
// Sample Output
// Designation: D
// Base Salary: 35000.00
// Total Salary: 45000.00
// Tax: 4500.00

#include <stdio.h>
int main()
{
    float Total_Salary;
    float basic_salary,tax;
    int Home_Allowance = 10000;
     int   Food_Allowance = 3000;
      int  Travel_Allowance = 10000;
      char ch;

   
    printf("Enter the character :");
    scanf("%c", &ch);
    printf("Enter the Base Salary : ");
    scanf("%f", &basic_salary);



if(ch=='D' || ch=='d'){
 Total_Salary= basic_salary + Home_Allowance;

}else if(ch=='T'|| ch=='t'){
 Total_Salary= basic_salary + Home_Allowance + Food_Allowance ;

}else if(ch=='M'|| ch=='m'){
 Total_Salary= basic_salary + Home_Allowance + Food_Allowance + Travel_Allowance;

}else{
    printf("Invalid input");
}
if(Total_Salary>40000){

tax=Total_Salary*10/100;
}else{
tax=Total_Salary*5/100;

}
printf("Designation :%c\n",ch);
printf("Base Salary : %.2f\n",basic_salary);
printf("Total Salary: %.2f\n",Total_Salary);
printf("Tax : %.2f",tax);

}