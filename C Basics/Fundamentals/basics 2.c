#include <stdio.h>

int main()
{
    printf("Basics of C:\n");

    // Variáveis
    int n1, n2, sum, div, mult, sub;

    printf("Choose first number: ");
    scanf("%d", &n1);

    printf("Choose second number: ");
    scanf("%d", &n2);

    // Calcula as operações após a leitura dos valores
    sum = n1 + n2;
    sub = n1 - n2;
    div = n1 / n2;
    mult = n1 * n2;

    // Exibe os resultados
    printf("Sum: %d + %d = %d\n", n1, n2, sum);
    printf("Subtraction: %d - %d = %d\n", n1, n2, sub);
    printf("Division: %d / %d = %d\n", n1, n2, div);
    printf("Multiplication: %d * %d = %d\n", n1, n2, mult);

    return 0;
}
