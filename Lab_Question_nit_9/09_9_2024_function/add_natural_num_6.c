// Que 6 : Write a program in C to add N natural numbers using a function.
// -------

// -> create int main() function.
// -> create int naturalNumberSum(int a) function. this function will take one integer number as input and will return sum of natural number.
// -> in main function read one values and call naturalNumberSum function. and print the result.

// Sample input : Input n value : 10
// Sample output : The sum of 10 natural numbers is 55

#include<stdio.h>
int naturalNumberSum(int num){
    int sum=0;
    for (int i = 1; i <= num; i++)
    {
        sum+=i;
    }
    return sum;
    
}
int main(){
int num;
printf("Enter the number : ");
scanf("%d",&num);

printf("The sum of %d natural number is %d ",num,naturalNumberSum(num));
    
    return 0;
}