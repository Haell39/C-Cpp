#include <stdio.h>

// Função para demonstrar comandos condicionais
void verificarNumero(int num) {
    if (num > 0) {
        printf("O número %d é positivo.\n", num);
    } else if (num < 0) {
        printf("O número %d é negativo.\n", num);
    } else {
        printf("O número é zero.\n");
    }
}

// Função para demonstrar comandos de repetição
void contarAteN(int n) {
    printf("Contando até %d usando 'for':\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("Contando até %d usando 'while':\n", n);
    int i = 1;
    while (i <= n) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
}

// Função para demonstrar o uso de ponteiros
void trocarValores(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função principal
int main() {
    // Comandos condicionais
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    verificarNumero(numero);

    // Comandos de repetição
    int limite;
    printf("Digite um número para contar até ele: ");
    scanf("%d", &limite);
    contarAteN(limite);

    // Ponteiros
    int x = 10, y = 20;
    printf("\nValores antes da troca: x = %d, y = %d\n", x, y);
    trocarValores(&x, &y);
    printf("Valores depois da troca: x = %d, y = %d\n", x, y);

    return 0;
}
