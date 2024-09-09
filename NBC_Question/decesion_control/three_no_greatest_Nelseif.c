//  Input three no and calculate greastest (using nexted if else)

#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter the num1 : ");
    scanf("%d", &num1);
    printf("Enter the num2 : ");
    scanf("%d", &num2);
    printf("Enter the num3 : ");
    scanf("%d", &num3);

    if (num1 == num2 && num2 == num3) {
        printf("All numbers are equal.\n");
    } else {
        if (num1 >= num2) {
            if (num1 >= num3) {
                printf("The greatest number is: %d\n", num1);
            } else {
                printf("The greatest number is: %d\n", num3);
            }
        } else {
            if (num2 >= num3) {
                printf("The greatest number is: %d\n", num2);
            } else {
                printf("The greatest number is: %d\n", num3);
            }
        }
    }

    return 0;
}

