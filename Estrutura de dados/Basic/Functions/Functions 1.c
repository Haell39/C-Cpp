#include <stdio.h>

// Função sem retorno e sem parâmetros
void exibirMensagem() {
    printf("Olá! Esta é uma função sem retorno e sem parâmetros.\n");
}

// Função com retorno e sem parâmetros
int retornaCinco() {
    return 5;
}

// Função com parâmetros e sem retorno
void quadrado(int num) {
    printf("O quadrado de %d é %d.\n", num, num * num);
}

// Função com parâmetros e com retorno
int somar(int a, int b) {
    return a + b;
}

int main() {
    // Chamada de função sem retorno e sem parâmetros
    exibirMensagem();

    // Chamada de função com retorno e sem parâmetros
    int numero = retornaCinco();
    printf("A função retornaCinco retornou: %d\n", numero);

    // Chamada de função com parâmetros e sem retorno
    quadrado(4); // Passagem de argumento por valor

    // Chamada de função com parâmetros e com retorno
    int resultado = somar(3, 7); // Passagem de argumentos por valor
    printf("A soma de 3 e 7 é: %d\n", resultado);

    return 0;
}
