#include <stdio.h>

#define V 5 // Número de vértices

// Função para imprimir o grafo como uma matriz de adjacência
void imprimirGrafo(int grafo[V][V])
{
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            printf("%d ", grafo[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int grafo[V][V] = {{0, 1, 0, 0, 1},
                       {1, 0, 1, 0, 0},
                       {0, 1, 0, 1, 0},
                       {0, 0, 1, 0, 1},
                       {1, 0, 0, 1, 0}};

    printf("Matriz de adjacência do grafo:\n");
    imprimirGrafo(grafo);

    return 0;
}
