#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Digite tres nemeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b || a == c || b == c)
    {
        printf("Os numeros nao sao distintos.\n");
    }
    else
    {
        if (a < b)
        {
            if (b < c)
            {
                printf("%d %d %d\n", a, b, c);
            }
            else if (a < c)
            {
                printf("%d %d %d\n", a, c, b);
            }
            else
            {
                printf("%d %d %d\n", c, a, b);
            }
        }
        else if (b < c)
        {
            if (a < c)
            {
                printf("%d %d %d\n", b, a, c);
            }
            else
            {
                printf("%d %d %d\n", b, c, a);
            }
        }
        else
        {
            printf("%d %d %d\n", c, b, a);
        }
    }

    return 0;
}
