#include <stdio.h>
#include <stdio.h>

int main()
{
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int soma = 0;

    for (int i = 0; i < 10; i++)
    {
        soma += vetor[i];
    }

    float media;
    media = (float)soma / 10;

    printf("A soma dos elementos do vetor eh: %d\n", soma);
    printf("A media dos elementos do vetor eh: %.2f\n", media);

    printf("A media eh 5, e os numeros maiores que a media sao: \n");

    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] > 5)
        {
            printf("%d\n", vetor[i]);
        }
    }

    return 0;
}
