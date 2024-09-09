// ATM PIN Validation: 
#include<stdio.h>
int main(){
int gen,pin,c=0;
printf("Genret your pin ");
scanf("%4d",&gen);
abc:

printf("Enter the ATM pin number ");
scanf("%4d",&pin);

if(pin==gen){
    printf("Welcome to HDFC ATM ");
}else{
    c++;
    if(c==3) printf("Ur card blocked for 24- Hours");
else{
    printf("Invlid PIN\n"); goto abc;
}
}
    
}