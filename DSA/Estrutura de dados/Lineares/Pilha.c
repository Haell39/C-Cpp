#include <stdio.h>
#include <stdlib.h>

#define MAX 5 // Definindo o tamanho máximo da pilha

// Estrutura da pilha
struct Pilha {
    int itens[MAX];
    int topo;
};

// Função para inicializar a pilha
void inicializarPilha(struct Pilha* p) {
    p->topo = -1;
}

// Função para verificar se a pilha está cheia
int estaCheia(struct Pilha* p) {
    return p->topo == MAX - 1;
}

// Função para verificar se a pilha está vazia
int estaVazia(struct Pilha* p) {
    return p->topo == -1;
}

// Função para adicionar um elemento na pilha (push)
void push(struct Pilha* p, int item) {
    if (estaCheia(p)) {
        printf("Pilha cheia! Não é possível adicionar %d\n", item);
        return;
    }
    p->itens[++(p->topo)] = item;
    printf("%d adicionado à pilha.\n", item);
}

// Função para remover um elemento da pilha (pop)
int pop(struct Pilha* p) {
    if (estaVazia(p)) {
        printf("Pilha vazia! Não é possível remover elemento.\n");
        return -1;
    }
    return p->itens[(p->topo)--];
}

// Função para imprimir a pilha
void imprimirPilha(struct Pilha* p) {
    if (estaVazia(p)) {
        printf("Pilha vazia!\n");
        return;
    }
    printf("Elementos da pilha: ");
    for (int i = 0; i <= p->topo; i++) {
        printf("%d ", p->itens[i]);
    }
    printf("\n");
}

int main() {
    struct Pilha p;
    inicializarPilha(&p);

    push(&p, 10);
    push(&p, 20);
    push(&p, 30);
    imprimirPilha(&p);

    printf("Elemento removido: %d\n", pop(&p));
    imprimirPilha(&p);

    return 0;
}
