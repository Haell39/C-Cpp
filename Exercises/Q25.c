#include <stdio.h>
#include <math.h>

int main()
{

    //* Vou mostrar os numeros pares de 14 a 30:

    for (int i = 14; i <= 30; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d", i);
        }
    }

    return 0;
}