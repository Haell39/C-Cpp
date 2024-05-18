#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída
#include <stdlib.h> // Inclui a biblioteca padrão do C, útil para funções de alocação de memória, controle de processos, etc.

int main() // Função principal do programa, onde a execução começa
{
    int i;   // Declaração de uma variável inteira 'i' que será usada como contador no loop
    int num; // Declaração de uma variável inteira 'num' para armazenar os números inseridos pelo usuário

    // Loop 'for' que se repete 5 vezes
    for (i = 0; i < 5; i++)
    {
        // Solicita ao usuário que insira um número
        printf("Digite o numero %d: ", i + 1);

        //* A linha `printf("Digite o numero %d: ", i + 1);` serve para exibir uma mensagem ao usuário solicitando que ele digite um número. O `%d` no `printf` é um especificador de formato que será substituído pelo valor de `i + 1`.

        //* O "i + 1" é usado porque o índice `i` no loop começa em 0, mas queremos que a mensagem exibida ao usuário seja mais intuitiva, começando de 1. Por exemplo, na primeira iteração, `i` é 0, mas a mensagem será "Digite o numero 1:", na segunda iteração `i` é 1, mas a mensagem será "Digite o numero 2:", e assim por diante até "Digite o numero 5:".

        //* Se não somássemos 1, a mensagem exibida seria "Digite o numero 0:", "Digite o numero 1:", etc., o que pode ser confuso para o usuário. Portanto, somar 1 torna a interface do programa mais amigável e fácil de entender.

        scanf("%d", &num); // Lê o número inserido pelo usuário e armazena na variável 'num'

        // Verifica se o número está entre 100 e 200
        if (num >= 100 && num <= 200)
        {
            // Se o número estiver entre 100 e 200, imprime uma mensagem informando isso
            printf("Voce digitou um numero entre 100 e 200\n");
        }
        else
        {
            // Se o número não estiver entre 100 e 200, imprime uma mensagem informando isso
            printf("Voce digitou um numero fora da faixa entre 100 e 200\n");
        }
    }

    return 0; // Retorna 0 para indicar que o programa terminou corretamente
}
