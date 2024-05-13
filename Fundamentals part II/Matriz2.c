#include <stdio.h>
#include <stdlib.h>
//* Criando constantes em C
#define linhas 2
#define colunas 2

int main()
{
    //* Usando as constantes

    int matriz[linhas][colunas], i, j; //* primeiro índice é linha, segundo índice é coluna
    //! ATENÇÃO:
    //? Se mexer nos indices da matriz, deve se mexer tambem nos indices das linhas e colunas i e j
    //* --> int matriz [5][4], i, j então for (i = 0; i < 5; i++); for (j = 0; j < 4; j++);

    printf("Digite os valores da matriz: \n\n");
    //* usando as constantes

    for (i = 0; i < linhas; i++) //* o i controla as linhas
    {
        for (j = 0; j < colunas; j++) //* o j controla as colunas
        {
            printf("\nElemento[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //* Saida de dados 
    printf("\nMatriz inserida:\n");

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("%d\t", matriz[i][j]); //* Adiciona um tab após cada elemento
        }
        printf("\n"); //* Quebra de linha após cada linha da matriz
    }

    return 0;
}