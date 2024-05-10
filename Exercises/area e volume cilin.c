#include <stdio.h>
#define PI 3.14

//* Calculo da area

float CA(float r, float h)
{

    float areaB, areaL, areaT;
    areaB = PI * r * r;
    areaL = 2 * PI * r * h;
    areaT = 2 * areaB + areaL;
    return areaT;
}

//* Calculo do volume

float CV(float r, float h)
{
    float volume;
    volume = PI * r * r * h;
    return volume;
}

int main()

{

    float r, h;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &r);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &h);
    float area = CA(r, h);
    float volume = CV(r, h);
    printf("The surface area is: %.2f \n", area);
    printf("The volume is: %.2f \n", volume);
    printf("Base Area is %.2f\n", 3.14 * r * r);
    printf("Lateral Area is %.2f\n", 2 * 3.14 * r * h);

    return 0;
}
