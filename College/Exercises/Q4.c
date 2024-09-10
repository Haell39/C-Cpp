#include <stdio.h>

int main()
{
    printf("Digite 2 numeros: \n");
    int a, b;

    //* Soma
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);

    //* Produto

    printf("%d * %d = %d\n", a, b, a * b);

    //* Quociente

    printf("%d / %d = %d\n", a, b, a / b);

    return 0;
}
