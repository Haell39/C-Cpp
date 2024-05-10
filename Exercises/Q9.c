#include <stdio.h>

int main()
{

    int a, b;
    int c;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("The original numbers are: %d and %d\n", a, b);

    //* agora trocando os valores de a e b

    c = a; //* c é o valor temporario que vai receber o valor de a
    a = b; //* a recebe o valor de b
    b = c; //* b recebe o valor de c, sendo que c é o valor temporario que recebeu o valor de a

    printf("The swapped numbers are: ");

    printf("%d %d\n", a, b);

    return 0;
}