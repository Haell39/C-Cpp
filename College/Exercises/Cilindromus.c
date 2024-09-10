#include <stdio.h>

// Função para calcular a área da superfície de um cilindro
double CA(double r, double h) // CA == Calculate the area
{
    double areaBase = 3.14 * r * r;
    double areaLateral = 2 * 3.14 * r * h;
    double areaTotal = 2 * areaBase + areaLateral;
    return areaTotal;
}

// Função para calcular o volume de um cilindro
double CV(double r, double h) // CV == Calculate the Volume
{
    double volume = 3.14 * r * r * h; // Volume = área da base * h
    return volume;
}
int main()
{
    double r, h;

    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &r);
    printf("Enter the height of the cylinder: ");
    scanf("%lf", &h);
    double area = CA(r, h);
    double volume = CV(r, h);
    printf("The surface area is: %.2f \n", area);
    printf("The volume is: %.2f \n", volume);
    printf("Base Area is %.2f\n", 3.14 * r * r);
    printf("Lateral Area is %.2f\n", 2 * 3.14 * r * h);


    return 0;
}
