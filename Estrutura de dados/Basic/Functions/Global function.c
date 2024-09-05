#include <stdio.h>

// Variável global
int contador = 0;

// Função para incrementar o contador
void incrementarContador() {
    contador++;
}

int main() {
    incrementarContador();
    incrementarContador();
    printf("Valor do contador: %d\n", contador); // Deve exibir 2
    return 0;
}
