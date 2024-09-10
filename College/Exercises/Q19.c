
#include <stdio.h>

int main()
{

    int a, b, c;
    printf("Type  3 Integer numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("%d eh o maior", a);
    }
    else if (b > a && b > c)
    {
        printf("%d eh o maior", b);
    }
    else if (c > a && c > b)
    {
        printf("%d eh o maior", c);
    }
    else if (a == b && b == c)
    {
        printf("Numeros iguais");
    }
    else if (b == c)
    {
        printf("O segundo eh igual o ultimo");
    }
    else if (a == b)
    {
        printf("O primeiro eh igual ao segundo");
    }

    else if (a == c)
    {
        printf("O primeiro eh igual ao terceiro");
    }

    else{
        printf("Invalid numbers");
    }

    return 0;
}
