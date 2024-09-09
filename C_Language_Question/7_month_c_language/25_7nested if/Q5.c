// Internet Banking style:
#include<stdio.h>
#include<string.h>
int main(){
char user[20],pass[20],cap[20];
printf("Enter user name ");
scanf("%s",&user);
printf("Enter pass word ");
scanf("%s",&pass);
printf("Enter captcha ");
scanf("%s",&cap);
if(strcmp(user,"Ankit")==0 && strcmp(pass,"Indian")==0 && strcmp(cap,"Hyd-1")==0){
    printf("welcome to SBI net banking");
}else{
    printf("Invalid user name/pass word/captcha");
}

    
    return 0;
}