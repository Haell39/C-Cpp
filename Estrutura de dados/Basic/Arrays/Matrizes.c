#include <stdio.h>

// Função para imprimir uma matriz
void imprimirMatriz(int matriz[3][3], int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    // Declaração e inicialização de uma matriz 3x3
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // Imprimindo a matriz
    printf("Matriz 3x3:\n");
    imprimirMatriz(matriz, 3, 3);

    return 0;
}
