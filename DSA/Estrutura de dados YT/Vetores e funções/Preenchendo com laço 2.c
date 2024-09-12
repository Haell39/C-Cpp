#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, vet[5];
    b = 0;
    for (a = 0; a < 5; a++)
    {
        vet[a] = b;
        b = b + 2;
    }

    for (a = 0; a < 5; a++)
    {
        printf("%d", vet[a]);
    }

    return 0;
}