#include <stdio.h>

int main() {
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    int soma = 0;
    int i;
    for (i = 0; i < 10; i++) {
        soma += vetor[i];
    }
    float media = (float)soma / 10;
    printf("A media dos elementos do vetor eh: %.2f\n", media);
    return 0;
}
