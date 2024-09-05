#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó da árvore binária de busca
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

// Função para inserir um novo nó na BST
struct No *inserir(struct No *raiz, int valor)
{
    if (raiz == NULL)
        return criarNo(valor);

    if (valor < raiz->dado)
        raiz->esquerdo = inserir(raiz->esquerdo, valor);
    else if (valor > raiz->dado)
        raiz->direito = inserir(raiz->direito, valor);

    return raiz;
}

// Função de travessia In-Order
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
    struct No *raiz = NULL;
    raiz = inserir(raiz, 50);
    inserir(raiz, 30);
    inserir(raiz, 20);
    inserir(raiz, 40);
    inserir(raiz, 70);
    inserir(raiz, 60);
    inserir(raiz, 80);

    printf("Travessia In-Order da BST: ");
    inOrder(raiz);
    printf("\n");

    return 0;
}
