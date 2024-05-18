#include <stdio.h>

//* Jeito mais inteligente e eficaz de se fazer o exercício

int main()
{
    int i;
    int num;

    // Loop para ler e verificar 5 números
    for (i = 0; i < 5; i++)
    {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num);

        // Verifica se o número está entre 100 e 200
        if (num >= 100 && num <= 200)
        {
            printf("Voce digitou um numero entre 100 e 200\n");
        }
        else
        {
            printf("Voce digitou um numero fora da faixa entre 100 e 200\n");
        }
    }

    return 0;
}
