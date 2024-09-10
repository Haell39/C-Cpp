#include <stdio.h>

int main()
{
    int i, num, maior;

    // Solicitar o primeiro número fora do loop para inicializar a variável 'maior'
    printf("Digite o numero 1: ");
    scanf("%d", &num);
    maior = num;

    // Solicitar os outros 4 números
    for (i = 2; i <= 20; i++)
    {
        printf("Digite o numero %d: ", i);
        scanf("%d", &num);

        // Atualizar a variável 'maior' se o número atual for maior
        if (num > maior)
        {
            maior = num;
        }
    }

    // Exibir o maior número
    printf("O maior numero e: %d\n", maior);

    return 0;
}
