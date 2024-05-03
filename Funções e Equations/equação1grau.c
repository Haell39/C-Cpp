#include <stdio.h>

// Função para resolver equações do primeiro grau
void resolverEquacao(float a, float b)
{
    // Verifica se 'a' é igual a zero
    if (a == 0)
    {
        //* Se 'a' for zero, a equação não tem solução
        if (b == 0)
        {
            //* Se 'b' for zero, a solução é X = 0
            printf("Infinitas solucoes\n");
        }
        else
        {
            //* se a e b for 0, a equação tem infinitas soluções
            printf("Sem solucao\n");
        }
    }
    else
    {
        // Se 'a' não for zero, calcula a solução para 'x'
        float x = -b / a; //* formula resolução de uma equação do primeiro grau
        // Imprime a solução da equação
        printf("A solucao da equacao %.2fx + %.2f = 0 eh: x = %.2f\n", a, b, x);
    }
}

// Função principal (main) do programa
int main()
{
    float a, b;
    // Solicita ao usuário que digite o valor de 'a'
    printf("Digite o valor de a: ");
    // Lê o valor de 'a' fornecido pelo usuário
    scanf("%f", &a);
    // Solicita ao usuário que digite o valor de 'b'
    printf("Digite o valor de b: ");
    // Lê o valor de 'b' fornecido pelo usuário
    scanf("%f", &b);

    // Chama a função resolverEquacao com os valores de 'a' e 'b' fornecidos pelo usuário
    resolverEquacao(a, b);

    return 0;
}
