#include <stdio.h>

int main()

{

    int i;
    for (i = 0; i < 5; i++)
    {
        // A linha `printf("%u\n", ++i<<2);` faz o seguinte:
        // 1. `++i` incrementa o valor de `i` em 1 e o retorna. Isso é feito antes de imprimir o resultado.
        // 2. `<<2` desloca o valor de `i` para a esquerda 2 posições, multiplicando-o por 4. Isso é feito antes de imprimir o resultado.
        // 3. `%u` é um especificador de formato que indica que o valor a ser impresso será interpretado como um inteiro sem sinal.
        // 4. `\n` é um caractere de quebra de linha que indica que a linha será finalizada e um nova linha será impressa.
        // Dessa forma, a linha acima está imprimindo o valor de `i` incrementado em 1 e multiplicado por 4, em cada iteração do loop.
        printf("O valor de i incrementado em 1 e multiplicado por 4 na iteração %d eh: %u\n", i+1, ++i<<3);
    }
    return 0;
}
