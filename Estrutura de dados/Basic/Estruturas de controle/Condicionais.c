#include <stdio.h>

int main()
{
    // Estrutura Condicional
    int idade = 20;
    if (idade >= 18)
    {
        printf("Maior de idade\n");
    }

    // Estrutura Condicional if-else
    idade = 16;
    if (idade >= 18)
    {
        printf("Maior de idade\n");
    }
    else
    {
        printf("Menor de idade\n");
    }

    // Estrutura Condicional if-else if-else
    int nota = 85;
    if (nota >= 90)
    {
        printf("Excelente\n");
    }
    else if (nota >= 70)
    {
        printf("Bom\n");
    }
    else if (nota >= 50)
    {
        printf("Suficiente\n");
    }
    else
    {
        printf("Insuficiente\n");
    }

    // Estrutura Condicional switch
    int dia = 3;
    switch (dia)
    {
    case 1:
        printf("Segunda-feira\n");
        break;
    case 2:
        printf("Terça-feira\n");
        break;
    case 3:
        printf("Quarta-feira\n");
        break;
    default:
        printf("Dia inválido\n");
    }

    return 0;
}
