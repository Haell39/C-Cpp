#include <stdio.h>

int somapa(int a, int r, int n)
{
    int somar;
    somar = (n * (2 * a + (n - 1) * r)) / 2;
    return somar;
}

int main()
{
    int n, a, r, soma2; // n = número de termos, a = primeiro termo, r = razão
    printf("Numero de termos da PA: \n");
    scanf("%d", &n);
    printf("Primeiro termo da PA: \n");
    scanf("%d", &a);
    printf("Qual a razão dessa PA?: \n");
    scanf("%d", &r);

    //* int soma = (n * (2 * a + (n - 1) * r)) / 2; // fórmula de soma de uma PA
    soma2 = somapa(a, r, n);

    printf("A PA é: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a + i * r); // fórmula do n-ésimo termo
    }
    printf("\n");
    printf("A soma dos termos dessa PA eh: %d\n", soma2);
    return 0;
}
