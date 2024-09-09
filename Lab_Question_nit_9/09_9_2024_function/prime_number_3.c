
// Que 3 : Write a program in C to check whether a number is a prime number or not by using the function.
// -------

// -> create int main() function.
// -> create bool isPrime(int n) function.
// -> in main function read one number and call isPrime(int n) function. here isPrime(int n) function will perform the operation and will return true or false to the main function.
// -> in main function catch the boolean result and according that print the proper message.

// Sample input : Input a positive number : 5

// Sample output : The number 5 is a prime number.

#include<stdio.h>
#include<stdbool.h>
bool isPrime(int num){
int count=0;
 for (int j = 1; j <= num; j++)
    {
        if(num%j==0){
          count++;
        }
    }
    if(count==2){
        return true;
    }else{
        return false;
    }
    


}
int main(){
int num;
printf("Enter the number : ");
scanf("%d",&num);
if(isPrime(num)){
    printf(" The number %d is a prime number ",num);
}else{
    printf(" The number %d is a not prime number ",num);

}
    
    return 0;
}