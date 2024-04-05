#include <stdio.h>

// Função para verificar se um número é primo
int ehPrimo(int num) {
    // Verifica se o número é menor ou igual a 1
    if (num <= 1) {
        return 0; // Não é primo
    }
    // Verifica se o número é divisível por algum número de 2 a num - 1
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0; // Não é primo
        }
    }
    return 1; // É primo
}

int main() {
    int limite;

    printf("Até que numero verificar: ");
    scanf("%d", &limite);

    printf("Números primos até %d:\n", limite);
    
    // Loop para verificar cada número de 2 a limite
    for (int i = 2; i <= limite; i++) {
        // Verifica se o número é primo usando a função ehPrimo()
        if (ehPrimo(i)) {
            printf("%d ", i); // Imprime o número primo
        }
    }
    printf("\n");

    return 0;
}
