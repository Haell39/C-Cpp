#include <stdio.h>

// Função para contar o comprimento de uma string usando ponteiros
int comprimentoString(char *str) {
    char *ptr = str; // Aponta para o início da string
    int comprimento = 0;

    while (*ptr != '\0') { // Enquanto não atingir o fim da string
        comprimento++;
        ptr++; // Avança para o próximo caractere
    }

    return comprimento;
}

int main() {
    char texto[] = "Hello, World!";
    printf("Comprimento da string '%s' é: %d\n", texto, comprimentoString(texto));

    return 0;
}
