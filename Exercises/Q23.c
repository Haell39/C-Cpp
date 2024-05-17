//*Funcao para calculo da equação quadratica

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float delta(float a, float b, float c)
{
    return (b * b) - (4 * a * c);
}

int main()
{

    printf("digite os indices da equacao\n");
    float a, b, c, x1, x2, x;
    scanf("%f %f %f", &a, &b, &c);
    float discriminante = delta(a, b, c);

    if (discriminante > 0)
    {
        printf("A equacao tera 2 raizes diferentes e Reais: ");
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("x' = %0.1f e x'' = %0.1f", x1, x2);
    }
    else if (discriminante == 0)
    {

        printf("A equacao tera 2 raizes iguais e Reais: ");
        x = (-b) / (2 * a);
        printf("x = %0.1f", x);
    }
    else
    {
        printf("A equacao nao tem raizes reais!");
    }

    return 0;
}