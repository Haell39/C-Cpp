#include <stdio.h>

int busca_linear(int arr[], int tamanho, int chave) {
    for (int i = 0; i < tamanho; i++) {
        if (arr[i] == chave) {
            return i; // Retorna o índice do elemento encontrado
        }
    }
    return -1; // Retorna -1 se o elemento não for encontrado
}

int main() {
    int arr[] = {5, 3, 8, 4, 2};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int chave = 4;
    
    int resultado = busca_linear(arr, tamanho, chave);
    
    if (resultado != -1) {
        printf("Elemento encontrado no índice: %d\n", resultado);
    } else {
        printf("Elemento não encontrado.\n");
    }
    
    return 0;
}