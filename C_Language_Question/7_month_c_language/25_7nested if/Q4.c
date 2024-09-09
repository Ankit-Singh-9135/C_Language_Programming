// Gmail Style Login:

#include<stdio.h>
#include<string.h>
int main()
{
char user[20], pass[20], cap[20];
printf("Enter user name "); scanf("%s",user);
if(strcmp(user,"Ankit")==0)
{
printf("Enter pass word "); scanf("%s",pass);
if(strcmp(pass,"Indian")==0)
{
printf("Enter captcha "); scanf("%s",cap);
if(strcmp(cap,"Hyd-1")==0) puts("Welcome to Gmail");
else puts("Invalid Captcha");
}
else puts("Invalid Pass word");
}

else puts("Invalid User name");
}