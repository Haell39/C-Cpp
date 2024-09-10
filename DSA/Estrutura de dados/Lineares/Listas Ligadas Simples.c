#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura de um nó
struct No
{
    int dado;
    struct No *prox; // Ponteiro para o próximo nó
};

// Função para inserir um novo nó no início da lista
void inserirNoInicio(struct No **cabeca, int novoDado)
{
    struct No *novoNo = (struct No *)malloc(sizeof(struct No));
    novoNo->dado = novoDado;
    novoNo->prox = *cabeca; // O novo nó aponta para o nó atual da cabeça
    *cabeca = novoNo;       // Atualiza a cabeça para o novo nó
}

// Função para imprimir a lista
void imprimirLista(struct No *no)
{
    while (no != NULL)
    {
        printf("%d -> ", no->dado);
        no = no->prox;
    }
    printf("NULL\n");
}

// Função para deletar um nó específico na lista
void deletarNo(struct No **cabeca, int chave)
{
    struct No *temp = *cabeca, *anterior = NULL;

    // Se a cabeça contém a chave a ser removida
    if (temp != NULL && temp->dado == chave)
    {
        *cabeca = temp->prox; // Muda a cabeça
        free(temp);           // Libera o nó antigo
        return;
    }

    // Procura pelo nó a ser deletado
    while (temp != NULL && temp->dado != chave)
    {
        anterior = temp;
        temp = temp->prox;
    }

    // Se o nó não for encontrado
    if (temp == NULL)
        return;

    // Desconecta o nó da lista
    anterior->prox = temp->prox;
    free(temp);
}

int main()
{
    struct No *cabeca = NULL; // Inicializa a lista como vazia

    // Insere elementos na lista
    inserirNoInicio(&cabeca, 3);
    inserirNoInicio(&cabeca, 2);
    inserirNoInicio(&cabeca, 1);

    printf("Lista após inserções: ");
    imprimirLista(cabeca);

    // Deleta um nó da lista
    deletarNo(&cabeca, 2);

    printf("Lista após deletar o nó com valor 2: ");
    imprimirLista(cabeca);

    return 0;
}
