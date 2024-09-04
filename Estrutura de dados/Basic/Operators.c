#include <stdio.h>
#include <math.h> // Biblioteca para funções matemáticas

int main() {
    int a = 10, b = 3;

    // Operadores Aritméticos
    printf("Operadores Aritméticos:\n");
    printf("Soma: %d + %d = %d\n", a, b, a + b);
    printf("Subtração: %d - %d = %d\n", a, b, a - b);
    printf("Multiplicação: %d * %d = %d\n", a, b, a * b);
    printf("Divisão: %d / %d = %d\n", a, b, a / b);
    printf("Resto: %d %% %d = %d\n", a, b, a % b);

    // Operadores Relacionais
    printf("\nOperadores Relacionais:\n");
    printf("Igual a: %d == %d -> %d\n", a, b, a == b);
    printf("Diferente de: %d != %d -> %d\n", a, b, a != b);
    printf("Maior que: %d > %d -> %d\n", a, b, a > b);
    printf("Menor que: %d < %d -> %d\n", a, b, a < b);
    printf("Maior ou igual a: %d >= %d -> %d\n", a, b, a >= b);
    printf("Menor ou igual a: %d <= %d -> %d\n", a, b, a <= b);

    // Operadores Lógicos
    printf("\nOperadores Lógicos:\n");
    printf("E lógico (&&): %d && %d -> %d\n", a > 5, b < 5, (a > 5) && (b < 5));
    printf("Ou lógico (||): %d || %d -> %d\n", a > 5, b > 5, (a > 5) || (b > 5));
    printf("Negação lógica (!): !%d -> %d\n", a > 5, !(a > 5));


    // Operadores de Atribuição
    printf("\nOperadores de Atribuição:\n");
    printf("Atribuição simples: a = %d\n", a);
    a += 5; // a = a + 5
    printf("Atribuição aditiva (a += 5): %d\n", a);
    a -= 3; // a = a - 3
    printf("Atribuição subtrativa (a -= 3): %d\n", a);
    a *= 2; // a = a * 2
    printf("Atribuição multiplicativa (a *= 2): %d\n", a);
    a /= 4; // a = a / 4
    printf("Atribuição divisiva (a /= 4): %d\n", a);
    a %= 3; // a = a % 3
    printf("Atribuição do resto (a %%= 3): %d\n", a);

    //* Operadores Matemáticos Avançados
    printf("\nOperadores Matemáticos Avançados:\n");
    // Potência: pow(base, expoente)
    double base = 2.0;
    double expoente = 3.0;
    printf("Potência: %.2f^%.2f = %.2f\n", base, expoente, pow(base, expoente));

    // Logaritmo: log(base)
    double valor = 10.0;
    printf("Logaritmo natural de %.2f = %.2f\n", valor, log(valor));
    // Logaritmo na base 10: log10(base)
    printf("Logaritmo na base 10 de %.2f = %.2f\n", valor, log10(valor));

    // Operadores Bitwise
    printf("\nOperadores Bitwise:\n");
    printf("E bitwise (&): %d & %d -> %d\n", a, b, a & b);
    printf("Ou bitwise (|): %d | %d -> %d\n", a, b, a | b);
    printf("XOR bitwise (^): %d ^ %d -> %d\n", a, b, a ^ b);
    printf("Negação bitwise (~): ~%d -> %d\n", a, ~a);
    printf("Deslocamento para a esquerda (<<): %d << 1 -> %d\n", a, a << 1);
    printf("Deslocamento para a direita (>>): %d >> 1 -> %d\n", a, a >> 1);

    return 0;
}
