#include <stdio.h>

int main()
{

    //* Fatorial em C:

    //* N! = N * (N - 1) * (N - 2) * ... * 1
    //* 0! = 1
    int n;
    printf("Digite qual fatorial deseja calcular: ");
    scanf("%d", &n);
    int fatorial = 1;
    for (int i = 1; i <= n; i++)
    {
        fatorial = fatorial * i;
    }
    printf("%d! = %d\n", n, fatorial);
    /*
    //*oq está acontecendo é que o fatorial esta sendo calculado da seguinte forma:

    //* o usuario digita um numero inteiro qualquer, o codigo usa esse numero para saber quando o loop vai parar, o loop diz que fatorial começa em 1 e vai para o numero digitado pelo usuario "n", por exemplo, se o usuario digitar 5, o loop vai parar quando o fatorial chegar a 5, da forma: 1 * 2 * 3 * 4 * 5 = 120
    
    */

    return 0;
}