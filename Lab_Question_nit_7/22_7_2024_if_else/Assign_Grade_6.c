// 6)Assign Grade
// Write a C program to take input from the user about marks he got in 5 subjects.

// Find out the average of the student and give grade as per the below Condition.

// if the avg is greater than or equal to 90 then give grade A.

// if the avg is greater than or equal to 80 then give grade B.

// if the avg is greater than or equal to 70 then give grade C.

// if the avg is greater than or equal to 50 then give grade D.

// if the avg is less than 50 then give grade F.

// Print the Grade and average of the Student.
// Sample Input
// Follow as given in instructions
// Sample Output
// Follow as given in instructions

#include <stdio.h>
int main()
{
    int math, english, science, social_science, sanskrit, average, total;
    printf("Enter the  math number :");
    scanf("%d", &math);
    printf("Enter the  english number :");
    scanf("%d", &english);
    printf("Enter the  science number :");
    scanf("%d", &science);
    printf("Enter the  social_science number :");
    scanf("%d", &social_science);
    printf("Enter the  sanskrit number :");
    scanf("%d", &sanskrit);
    total = math + english + science + social_science + sanskrit;
    average = total / 5;
    if (average >= 90)
    {
        printf("Grade A");
    }
    else if (average >= 80)
    {
        printf("Grade B");
    }
    else if (average >= 70)
    {
        printf("Grade C");
    }
    else if (average >= 50)
    {
        printf("Grade D");
    }
    else if (average <= 50)
    {
        printf("Grade F");
    }
    printf("%d total number\n ",total);
    printf("%d Average\n ",average);

}