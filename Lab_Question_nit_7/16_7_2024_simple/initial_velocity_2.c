// 2)Write a program that takes the initial velocity (in meters per second), acceleration (in meters per second squared), and time (in seconds) from the user using scanf. Calculate the distance traveled by an object using the formula:
// formula :
// ( distance= initial_velocity × time+ 1/2 * acceleration × time * time )
// input :
// Enter the initial velocity (m/s):  10
// Enter the acceleration (m/s^2):  20
// Enter the time (s): 4
// output :
// The distance traveled is 200.00 meters.
#include <stdio.h>
int main()
{
    float velocity, acceleration, time, distance;
    printf("Enter the initial velocity :");
    scanf("%f", &velocity);
    printf("Enter the acceleration :");
    scanf("%f", &acceleration);
    printf("Enter the time :");
    scanf("%f", &time);
    distance = velocity * time + 1  * acceleration * time * time/ 2;
    printf("the distance traveled by : %f", distance);
}