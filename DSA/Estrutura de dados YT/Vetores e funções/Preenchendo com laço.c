#include <stdio.h>
#include <stdlib.h>


int main() {
    int i, vet[5]; //vetor com 5 posicoes de 0 a 4 de indice
    for (i = 0; i < 5; i++) {
        vet[i] = i; //* preenche o vetor com o proprio indice do vetor ou seja, indice 0 elemento 0, indice 1 elemento 1 e assim por diante.
    }
    for (i = 0; i < 5; i++) {
        printf("%d", vet[i]);   
    }
    return 0;
}