#include <stdio.h>
#include <math.h>

int main()
{
    int n = 20;
    float S = 0;
    float a, x;

    printf("Numero x:\n");
    scanf("%f", &x);
    printf("Numeros a:\n");
    scanf("%f", &a);

    printf("Numeros da soma:\n");

    for (int i = 1; i <= n; i++)
    {
        if (x == 0 || a > 0 && a < 20)
        {
            printf("valor invalido\n");
            break;
        }

        float termo = (i / a) * (20 - i) / pow(x, i) + (i / a - i) * (20 - i) / pow(x, i);
        S += termo;
        printf("%.2f", termo);
        if (i != n)
        {
            printf(" + ");
        }
        else
        {
            printf(" = ");
        }
    }

    printf("%.2f\n", S);
    return 0;
}