#include <stdio.h>
#include <math.h>

int main()
{

    int K, N;

    printf("Digite um numero qualquer(inteiro): ");
    scanf("%d", &K);
    printf("Digite um outro numero qualquer(inteiro): ");
    scanf("%d", &N);

    //* Exponenciação em C:

    int expo = pow(K, N);
    printf("%d elevado a %d = %d ", K, N, expo);





    return 0;
}