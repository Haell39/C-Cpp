#include <stdio.h>
#include <math.h>
#define PI 3.14159
// Function to calculate the area of a circle
double circlearea(double radius)
{
    return PI * radius * radius;
}

int main()
{
    double radius;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius); // Read the radius from the user, %lf for double
    double area = circlearea(radius); // Call the calculateCircleArea function
    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);

    return 0;
}