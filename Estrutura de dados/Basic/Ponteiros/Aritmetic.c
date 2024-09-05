#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr; // Ponteiro para o primeiro elemento do array

    printf("Elementos do array usando aritmética de ponteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i)); // Desreferencia o ponteiro com aritmética
    }
    printf("\n");

    return 0;
}
