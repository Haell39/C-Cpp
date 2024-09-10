#include <stdio.h>
#include <math.h>

float delta(float a, float b, float c)
{

    return (b * b) - (4 * a * c);
}

int main()
{
    float a, b, c, x1, x2;

    // Solicita ao usuário que digite os valores de 'a', 'b' e 'c'
    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    // Calcula o discriminante
    float discriminante = delta(a, b, c);

    if (discriminante > 0)
    {
        // Calcula as raízes
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("As raizes da equacao x1 e x2 eh igual a \n%.2f e %.2f\n", x1, x2);
    }
    else if (discriminante == 0)
    {
        // Raízes iguais
        x1 = -b / (2 * a);
        printf("A raiz dupla da equacao eh igual a:\n %.2f\n", x1);
    }
    else
    {
        // Raízes complexas
        printf("Nao existe raizes reais para estes indices");
    }

    return 0;
}
