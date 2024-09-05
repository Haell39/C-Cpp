#include <stdio.h>

// Função recursiva para calcular o fatorial de um número
int fatorial(int n) {
    if (n == 0) {
        return 1; // Caso base: fatorial de 0 é 1
    } else {
        return n * fatorial(n - 1); // Chamada recursiva
    }
}

int main() {
    int num = 5;
    printf("Fatorial de %d é: %d\n", num, fatorial(num));
    return 0;
}
