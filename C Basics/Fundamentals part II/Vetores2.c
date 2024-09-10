#include <stdio.h>

int main()
{
    // Declarando um vetor de inteiros com tamanho 5
    int vetor[5];

    // Preenchendo o vetor com valores fornecidos pelo usuário
    printf("Digite 5 números inteiros:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Exibindo os valores armazenados no vetor
    printf("\nValores armazenados no vetor:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Calculando a soma dos valores do vetor
    int soma = 0;
    for (int i = 0; i < 5; i++)
    {
        soma += vetor[i];
    }
    printf("\nA soma dos valores no vetor é: %d\n", soma);

    // Encontrando o maior valor no vetor
    int maior = vetor[0];
    for (int i = 1; i < 5; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    printf("O maior valor no vetor é: %d\n", maior);

    // Encontrando o menor valor no vetor
    int menor = vetor[0];
    for (int i = 1; i < 5; i++)
    {
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }
    printf("O menor valor no vetor é: %d\n", menor);

    return 0;
}
