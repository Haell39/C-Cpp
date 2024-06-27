#include <stdio.h>

double equacao1(double a, double b) {
    return (-b / a);
}

int main() {
    double a, b, x;

    printf("Qual indice a? ");
    scanf("%lf", &a);

    printf("Qual indice b? ");
    scanf("%lf", &b);

    if (a == 0) {
        printf("Não e uma equação do 1º grau\n");
    } else {
        x = equacao1(a, b);
        printf("X = %f\n", x);
    }

    return 0;
}

