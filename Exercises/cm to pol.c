#include <stdio.h>
#include <math.h>
int main()
{

    double cm, inches;

    printf("Enter a length in centimeters: ");
    scanf("%lf", &cm);

    inches = cm / 2.54;
    // Or one inches = 2.54 cm

    printf("%.2f centimeters is equal to %.2f inches.\n", cm, inches);
}