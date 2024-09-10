#include <stdio.h>

int main()
{
    printf("Digite 3 numeros inteiros separados por um espaco ou por enter: \n");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("Agora o sistema ira ordenar os valores em ordem crescente.\n");

    if (a > b)
    {
        int t = a;
        a = b;
        b = t;
    }
    if (b > c)
    {
        int t = b;
        b = c;
        c = t;
    }
    if (a > b)
    {
        int t = a;
        a = b;
        b = t;
    }

    printf("%d %d %d", a, b, c);

    return 0;
}
