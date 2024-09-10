#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó da árvore binária
struct No
{
    int dado;
    struct No *esquerdo;
    struct No *direito;
};

// Função para criar um novo nó
struct No *criarNo(int valor)
{
    struct No *novoNo = (struct No *)malloc(sizeof(struct No));
    novoNo->dado = valor;
    novoNo->esquerdo = NULL;
    novoNo->direito = NULL;
    return novoNo;
}

// Função de travessia In-Order (Esquerda, Raiz, Direita)
void inOrder(struct No *raiz)
{
    if (raiz != NULL)
    {
        inOrder(raiz->esquerdo);
        printf("%d ", raiz->dado);
        inOrder(raiz->direito);
    }
}

int main()
{
    // Criando a árvore
    struct No *raiz = criarNo(1);
    raiz->esquerdo = criarNo(2);
    raiz->direito = criarNo(3);
    raiz->esquerdo->esquerdo = criarNo(4);
    raiz->esquerdo->direito = criarNo(5);

    printf("Travessia In-Order da árvore binária: ");
    inOrder(raiz);
    printf("\n");

    return 0;
}
