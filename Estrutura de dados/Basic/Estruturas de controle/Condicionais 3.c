#include <stdio.h>

int main()
{
    // Exemplo com break e continue
    printf("Exemplo com break e continue:\n");
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break; // Sai do loop quando i é 5
        }
        if (i % 2 == 0)
        {
            continue; // Pula para a próxima iteração quando i é par
        }
        printf("Ímpar: %d\n", i);
    }

    // Estruturas aninhadas
    printf("\nEstruturas aninhadas:\n");
    for (int i = 0; i < 3; i++)
    {
        if (i % 2 == 0)
        {
            printf("Número par: %d\n", i);
        }
        else
        {
            printf("Número ímpar: %d\n", i);
        }
    }

    // Operadores Condicionais (ternários)
    printf("\nOperador Condicional Ternário:\n");
    int idade = 20;
    const char *status = (idade >= 18) ? "Maior de idade" : "Menor de idade";
    printf("%s\n", status);

    return 0;
}
