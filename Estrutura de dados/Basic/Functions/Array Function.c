#include <stdio.h>

// Função para calcular a soma dos elementos de um array
int somaArray(int arr[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += arr[i];
    }
    return soma;
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    printf("A soma dos elementos do array é: %d\n", somaArray(numeros, tamanho));
    return 0;
}
