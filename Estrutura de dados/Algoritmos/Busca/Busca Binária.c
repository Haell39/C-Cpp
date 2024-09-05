#include <stdio.h>

int busca_binaria(int arr[], int tamanho, int chave) {
    int esquerda = 0;
    int direita = tamanho - 1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        // Verifica se o elemento está presente no meio
        if (arr[meio] == chave) {
            return meio; // Retorna o índice do elemento encontrado
        }

        // Se o elemento for maior, ignora a metade esquerda
        if (arr[meio] < chave) {
            esquerda = meio + 1;
        } else { // Se o elemento é menor, ignora a metade direita
            direita = meio - 1;
        }
    }
    return -1; // Retorna -1 se o elemento não for encontrado
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int chave = 6;

    int resultado = busca_binaria(arr, tamanho, chave);

    if (resultado != -1) {
        printf("Elemento encontrado no índice: %d\n", resultado);
    } else {
        printf("Elemento não encontrado.\n");
    }

    return 0;
}