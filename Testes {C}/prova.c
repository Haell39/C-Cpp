
#include <stdio.h>

int recursao (int n) {
    if (n <= 10) {
        return n * 2;
    }
    else {
        return recursao(recursao(n/3));
    }
}

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Resultado: %d\n", recursao(num));
    return 0;
}
