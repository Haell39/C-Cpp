#include <stdio.h>
int main()
{

    printf("basics of C:\n");

    int n1, n2, rest;

    printf("Choose first number: ");
    scanf("%d", &n1);

    printf("Choose second number: ");
    scanf("%d", &n2);
    // Resto da divisão
    rest = n1 % n2;
    // operador de resto
    printf("Resto: %d %% %d = %d\n", n1, n2, rest);

    return 0;
}