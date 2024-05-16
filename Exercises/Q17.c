#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite dois inteiros: ");
    scanf("%d %d", &num1, &num2);

    if (num1 == num2) {
        printf("Os numeros sao iguais!\n");
    } else {
        if (num1 > num2) {
            printf("O primeiro numero (%d) e maior que o segundo numero (%d).\n", num1, num2);
        } else {
            printf("O segundo numero (%d) e maior que o primeiro numero (%d).\n", num2, num1);
        }
    }

    return 0;
}

