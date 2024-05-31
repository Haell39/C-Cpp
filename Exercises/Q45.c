#include <stdio.h>

int main(){


    //* Como fazer uma tabuada em C:

    int n, k;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    for(k = 1; k<=10;k++)
    {
        printf("%d x %d = %d\n", n, k, n*k);
    }

    return 0;
}