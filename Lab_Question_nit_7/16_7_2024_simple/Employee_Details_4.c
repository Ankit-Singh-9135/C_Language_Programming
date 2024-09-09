// 4)Write a program that takes details of an employee from the user, including name, employee ID, designation, and salary. Then, print the details of the employee.
// input :
// Enter employee name: rohit
// Enter employee ID: 101
// Enter employee designation: development
// Enter employee salary: 25000
// output:
// Employee Details
// Name: rohit
// Employee ID: 101
// Designation: development
// Salary: $25000.00
#include <stdio.h>
int main()
{
    char name[50], designation[50];
    int employee_ID;
    float salary;
    printf("Enter employee name :");
    scanf("%s", name);
    printf("Enter employee designation :");
    scanf("%s", designation);
    printf("Enter employee ID :");
    scanf("%d", &employee_ID);
    printf("Enter employee salary :");
    scanf("%f", &salary);
    printf("Employee Details\n");
    printf("Name: %s\nEmployee ID :%d\nDesignation :%s\nSalary :$%.2f", name, employee_ID, designation, salary);
}