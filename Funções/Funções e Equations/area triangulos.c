#include <stdio.h>
#include <math.h>

// Função para calcular a área de um triângulo equilátero
double areaTrianguloEquilatero(double lado)
{
    return pow(lado, 2) / (4 * sqrt(3));
}

// Função para calcular a área de um triângulo isósceles
double areaTrianguloIsosceles(double base, double altura)
{
    return 0.5 * base * altura;
}

// Função para calcular a área de um triângulo escaleno
double areaTrianguloEscaleno(double a, double b, double c)
{
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

// Funcao para calcular a area de um triangulo qualquer
double trianguloqlqr(double base, double altura)
{
    return (base * altura) / 2;
}

int main()
{
    int escolha;
    double lado, base, altura, a, b, c;
    //? como declarei essas variaveis como double, devo usar elas e alocar elas como double usando %lf !!!

    printf("Escolha o tipo de triângulo:\n");
    printf("1 - Triângulo equilátero\n");
    printf("2 - Triângulo isósceles\n");
    printf("3 - Triângulo escaleno\n");
    printf("4 - Triângulo Qualquer\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("Insira o lado do triângulo equilátero: ");
        scanf("%lf", &lado);
        printf("A área do triângulo equilátero é: %lf\n", areaTrianguloEquilatero(lado));
        break;
    case 2:
        printf("Insira a base e a altura do triângulo isósceles: ");
        scanf("%lf %lf", &base, &altura);
        printf("A área do triângulo isósceles é: %lf\n", areaTrianguloIsosceles(base, altura));
        break;
    case 3:
        printf("Insira os lados a, b e c do triângulo escaleno: ");
        scanf("%lf %lf %lf", &a, &b, &c);
        printf("A área do triângulo escaleno é: %lf\n", areaTrianguloEscaleno(a, b, c));
        break;
    case 4:
        printf("Insira a base e a altura do triângulo qualquer: ");
        scanf("%lf %lf", &base, &altura);
        printf("A área é: %0.2lf\n", trianguloqlqr(base, altura));
        break;
    default:
        printf("Opção inválida.\n");
    }

    return 0;
}
