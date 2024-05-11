#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//* esse projeto irar calclular area e volume das figuras solidas que o usuario escolher


// Função para calcular a área de um cubo
float calcularAreaCubo(float lado)
{
    return lado * lado; // A área de um cubo é o quadrado do lado
}

// Função para calcular o volume de um cubo
float calcularVolumeCubo(float lado)
{
    return lado * lado * lado; // O volume de um cubo é o cubo do lado
}

// Função para calcular a área da base de uma pirâmide (usaremos a fórmula do quadrado para a base)
float calcularAreaBasePiramide(float lado)
{
    return lado * lado; // Área do quadrado é lado * lado
}

// Função para calcular a área lateral de uma pirâmide
float calcularAreaLateralPiramide(float lado, float altura)
{
    return 4 * lado * sqrt(1 + (altura * altura) / (4 * lado * lado)); // Uma pirâmide tem 4 triângulos laterais iguais
}

// Função para calcular a área total de uma pirâmide
float calcularAreaTotalPiramide(float lado, float altura)
{
    float areaBase = calcularAreaBasePiramide(lado);
    float areaLateral = calcularAreaLateralPiramide(lado, altura);
    return areaBase + areaLateral;
}

// Função para calcular o volume de uma pirâmide
float calcularVolumePiramide(float lado, float altura)
{
    return (lado * lado * altura) / 3; // Fórmula do volume da pirâmide
}

int main()
{
    int opcao;

    // Solicita ao usuário que escolha qual calcular
    printf("Escolha o que deseja calcular:\n");
    printf("1 - Cubo\n");
    printf("2 - Pirâmide\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
    {
        float ladoCubo; // Variable for the side of the cube

        // Prompt the user to input the side of the cube
        printf("Digite o tamanho do lado do cubo: ");
        scanf("%f", &ladoCubo);

        // Calculate the area of the cube by calling the calcularAreaCubo function
        float areaCubo = calcularAreaCubo(ladoCubo);
        // Calculate the volume of the cube by calling the calcularVolumeCubo function
        float volumeCubo = calcularVolumeCubo(ladoCubo);

        // Print the results
        printf("A área do cubo é: %.2f\n", areaCubo);
        printf("O volume do cubo é: %.2f\n", volumeCubo);
    }
    break;
    case 2:
    {
        float ladoPiramide, alturaPiramide; // Variables for the base side and the height of the pyramid

        // Prompt the user to input the side of the base and the height of the pyramid
        printf("Digite o tamanho do lado da base da pirâmide: ");
        scanf("%f", &ladoPiramide);
        printf("Digite a altura da pirâmide: ");
        scanf("%f", &alturaPiramide);

        // Calculate the total area and the volume of the pyramid
        float areaTotalPiramide = calcularAreaTotalPiramide(ladoPiramide, alturaPiramide);
        float volumePiramide = calcularVolumePiramide(ladoPiramide, alturaPiramide);

        // Print the results
        printf("A área total da pirâmide é: %.2f\n", areaTotalPiramide);
        printf("O volume da pirâmide é: %.2f\n", volumePiramide);
    }
    break;
    default:
        printf("Opção inválida.\n");
    }

    return 0;
}