
#include <stdio.h>

int main()
{

    int a, b, c;
    printf("Type  3 different Integer numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("Invalid numbers");
    }

    else if (a > b && a > c && b > c)
    {
        printf("%d %d %d", c, b, a);
    }

    else if (a > b && a > c && c > b)
    {
        printf("%d %d %d", b, c, a);
    }
    else if (b > a && b > c && a > c)
    {
        printf("%d %d %d", c, a, b);
    }
    else if (b > a && b > c && c > a)
    {
        printf("%d %d %d", a, c, b);
    }

    else if (c > a && c > b && a > b)
    {
        printf("%d %d %d", b, a, c);
    }
    else if (c > a && c > b && b > a)
    {
        printf("%d %d %d", a, b, c);
    }

    return 0;
}
