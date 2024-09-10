#include <stdio.h>

// Função para imprimir os elementos de um array
void imprimirArray(int arr[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Função para calcular a média dos elementos de um array
float calcularMedia(int arr[], int tamanho)
{
    int soma = 0;
    for (int i = 0; i < tamanho; i++)
    {
        soma += arr[i];
    }
    return (float)soma / tamanho;
}

// Função para encontrar o maior elemento em um array
int encontrarMaior(int arr[], int tamanho)
{
    int maior = arr[0];
    for (int i = 1; i < tamanho; i++)
    {
        if (arr[i] > maior)
        {
            maior = arr[i];
        }
    }
    return maior;
}

// Função principal
int main()
{
    // Declaração e inicialização de um array
    int numeros[] = {4, 7, 1, 9, 3, 6};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    // Imprimindo o array
    printf("Elementos do array: ");
    imprimirArray(numeros, tamanho);

    // Calculando e imprimindo a média
    float media = calcularMedia(numeros, tamanho);
    printf("Média dos elementos: %.2f\n", media);

    // Encontrando e imprimindo o maior elemento
    int maior = encontrarMaior(numeros, tamanho);
    printf("Maior elemento do array: %d\n", maior);

    return 0;
}
