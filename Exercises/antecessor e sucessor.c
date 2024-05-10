#include <stdio.h>

int main()
{

    printf("digite um valor: ");
    int num;
    scanf("%d", &num);
    printf("O antecessor de %d eh %d e o sucessor de %d eh %d.\n", num, num - 1, num, num + 1);

    return 0;
}