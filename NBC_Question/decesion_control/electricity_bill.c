//  Enput value of electricity unit is calculate electricity. bill according to following.

// Unit <= 200 => Bill 500 RS

// 500>=unit>200 => 8RS/ unit

// otherwise => 10rs/unit

#include<stdio.h>
int main(){
float electricity_unit,electricity_bill;
printf("Enter the electricity_unit : ");
scanf("%f",&electricity_unit);
if(electricity_unit<=200){
    electricity_bill=500;
}else if(electricity_unit<=500){
    electricity_bill=electricity_unit*8;
}else{
    electricity_bill=electricity_unit*10;
}
printf("electricity_bill = %f",electricity_bill);
    
    return 0;
}
