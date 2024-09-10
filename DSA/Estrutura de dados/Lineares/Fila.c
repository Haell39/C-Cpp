#include <stdio.h>
#include <stdlib.h>

#define MAX 5 // Definindo o tamanho máximo da fila

// Estrutura da fila
struct Fila {
    int itens[MAX];
    int frente, tras;
};

// Função para inicializar a fila
void inicializarFila(struct Fila* f) {
    f->frente = -1;
    f->tras = -1;
}

// Função para verificar se a fila está cheia
int estaCheia(struct Fila* f) {
    return f->tras == MAX - 1;
}

// Função para verificar se a fila está vazia
int estaVazia(struct Fila* f) {
    return f->frente == -1 || f->frente > f->tras;
}

// Função para adicionar um elemento na fila (enqueue)
void enqueue(struct Fila* f, int item) {
    if (estaCheia(f)) {
        printf("Fila cheia! Não é possível adicionar %d\n", item);
        return;
    }
    if (f->frente == -1) f->frente = 0;
    f->itens[++(f->tras)] = item;
    printf("%d adicionado à fila.\n", item);
}

// Função para remover um elemento da fila (dequeue)
int dequeue(struct Fila* f) {
    if (estaVazia(f)) {
        printf("Fila vazia! Não é possível remover elemento.\n");
        return -1;
    }
    return f->itens[(f->frente)++];
}

// Função para imprimir a fila
void imprimirFila(struct Fila* f) {
    if (estaVazia(f)) {
        printf("Fila vazia!\n");
        return;
    }
    printf("Elementos da fila: ");
    for (int i = f->frente; i <= f->tras; i++) {
        printf("%d ", f->itens[i]);
    }
    printf("\n");
}

int main() {
    struct Fila f;
    inicializarFila(&f);

    enqueue(&f, 10);
    enqueue(&f, 20);
    enqueue(&f, 30);
    imprimirFila(&f);

    printf("Elemento removido: %d\n", dequeue(&f));
    imprimirFila(&f);

    return 0;
}
