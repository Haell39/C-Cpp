#include <stdio.h>

int main()
{

    //* Fazer o calculo dos  e mostrar a soma dos cem primeiros números

    int i, soma = 0;

    for (i = 1; i <= 100; i++)
    {
        soma += i;
    }

    printf("A soma dos cem primeiros numeros inteiros eh: %d\n", soma);

    //* Agora o calculo dos 301 primeiros números (com o 0 e o 300)

    int j, soma2 = 0;
    for (j = 0; j <= 300; j++)
    { 
        soma2 += j;
    }
    printf("A soma dos 300 primeiros números (com o 0 e o último) eh: %d\n", soma2);

    return 0;
}