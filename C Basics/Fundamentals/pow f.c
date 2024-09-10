#include <stdio.h>
#include <math.h>
int main()
{
    float x, y;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of y: ");
    scanf("%f", &y);
    float z = pow(x, y);
    printf("x^y = %f", z);
}