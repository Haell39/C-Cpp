#include <stdio.h>

int main() {
    int x = 10;     // Uma variável inteira
    int *p;         // Declaração de um ponteiro para um inteiro

    p = &x;         // 'p' recebe o endereço de 'x'

    // Imprimindo o endereço de 'x'
    printf("Endereço de x: %p\n", p);

    // Imprimindo o valor de 'x' usando desreferenciação
    printf("Valor de x usando desreferenciação: %d\n", *p);

    // Modificando o valor de 'x' usando o ponteiro
    *p = 20;
    printf("Novo valor de x após modificação via ponteiro: %d\n", x);

    // Usando ponteiro nulo
    int *ptrNull = NULL;
    if (ptrNull == NULL) {
        printf("O ponteiro está nulo.\n");
    }

    return 0;
}
