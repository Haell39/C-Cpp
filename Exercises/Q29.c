#include <stdio.h>
int main()
{

    //* Jeito 1 de resolver o exercicio:

    printf("Digite 5 numeros para verificao: ");

    int a, b, c, d, e;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a >= 100 && a <= 200 && b >= 100 && b <= 200 && c >= 100 && c <= 200 && d >= 100 && d <= 200 && e >= 100 && e <= 200)
    {

        printf("Todos os valores estao entre 100 e 200");
    }

    else
    {
        printf("Nem todos os valores estao entre 100 e 200");
    }

    return 0;
}
