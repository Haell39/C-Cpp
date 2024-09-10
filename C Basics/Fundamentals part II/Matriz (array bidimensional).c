#include <stdio.h>
#include <stdlib.h>

int main()
{

    //* Declarando uma matriz

    int matriz[3][3], i, j; //* primeiro índice é linha, segundo índice é coluna
    //! ATENÇÃO:
    //? Se mexer nos indices da matriz, deve se mexer tambem nos indices das linhas e colunas i e j
    //* --> int matriz [5][4], i, j então for (i = 0; i < 5; i++); for (j = 0; j < 4; j++);

    printf("Digite os valores da matriz: \n\n");
    //* recebendo os valores da matriz

    for (i = 0; i < 3; i++)  //* o i controla as linhas
    {
        for (j = 0; j < 3; j++) //* o j controla as colunas
        {
            printf("\nElemento[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //* Saida de dados
    printf("\nMatriz inserida:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", matriz[i][j]); //* Adiciona um tab após cada elemento
        }
        printf("\n"); //* Quebra de linha após cada linha da matriz
    }

    return 0;
}
