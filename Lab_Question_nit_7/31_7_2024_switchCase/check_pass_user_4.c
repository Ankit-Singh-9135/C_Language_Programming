// Write a C program to take user Id as 1001 and Pasword as 1010. Ask the user to enter his id, if the id is valid

// then ask the user to enter his password ,if the password is correct then print the name of the user, otherwise

// the program will print incorrect Passoword and if the Id doesnot exits, the program will print Incorrect Id.

// develop this program by using Switch case.

#include <stdio.h>
// #include<string.h>
int main()
{
    char name[100];
    int id, pass;

    printf("Enter the name ");
    scanf("%s", name);

    printf("Enter the id ");
    scanf("%d", &id);
    
    switch (id == 1001 )
    {
    case 1: printf("Enter the password ");
          scanf("%d",&pass);
          switch (pass==1010)
          {
          case 1: printf("Username %s  ",name); break;
          
          default:printf("incorrect password "); break;
          }
          break;
    default: printf("incorrect id");

    }

    return 0;
}