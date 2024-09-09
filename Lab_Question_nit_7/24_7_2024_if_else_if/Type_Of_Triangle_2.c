// 2)Type Of Triangle
// Write a C Program to check whether the triangle is an equilateral, isosceles or scalene triangle. Using the if-else statement.

// Take the inputs from the user.



// Case-1 :

// Enter the lengths of the sides of the triangle:

// Side 1: 5

// Side 2: 5

// Side 3: 5



// Case-2:

// Enter the lengths of the sides of the triangle:

// Side 1: 4

// Side 2: 5

// Side 3: 4

// The triangle is an isosceles triangle.



// Case-3:

// Enter the lengths of the sides of the triangle:

// Side 1: 3

// Side 2: 4

// Side 3: 5

// The triangle is a scalene triangle.
// Sample Input
// Enter the lengths of the sides of the triangle:
// Side 1: 5
// Side 2: 5
// Side 3: 5
// Sample Output
// The triangle is an equilateral triangle.

#include<stdio.h>
int main(){
    int num1,num2,num3;
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1==num2 && num2==num3 && num3==num1){
        printf("equeltrial");
    }else if(num1==num2 || num2==num3 || num1==num3){
        printf("The triangle is an isosceles triangle");
    }else if(num1!=num2 && num2!=num3 && num3!=num1){
        printf("The triangle is a scalene triangle");
    }

}

