//1) Read a baby age in no of days and find the baby age in years,
// months, weeks and days.
#include<stdio.h>
int main(){
    int tday,y,m,w,d;
    printf("Enter baby age in day");
    scanf("%d",&tday);
    y=tday/365;
    m=tday%365/30;
    w=tday%365%30/7;
    d=tday%365%30%7;
    printf("Baby age %d year %d month %d weeks and %d day",y,m,w,d);

}