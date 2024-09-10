#include <stdio.h>
#include <stdbool.h> // Para o tipo bool

int main() {
    // Tipos inteiros
    int inteiro = 42;
    unsigned int inteiroNaoNegativo = 100;
    long long int inteiroLongo = 1234567890123456789;
    short int inteiroCurto = 32767;

    // Tipos de ponto flutuante
    float real = 3.14f; // Nota: 'f' indica que é um float, não double
    double realDouble = 3.141592653589793;
    long double realLongDouble = 3.141592653589793238L; // Nota: 'L' indica que é um long double

    // Tipo caractere
    char caractere = 'A';
    unsigned char caractereNaoNegativo = 255;

    // Tipo booleano (disponível desde C99)
    bool booleano = true;

    // Imprimindo os valores
    printf("Tipo int: %d\n", inteiro);
    printf("Tipo unsigned int: %u\n", inteiroNaoNegativo);
    printf("Tipo long long int: %lld\n", inteiroLongo);
    printf("Tipo short int: %d\n", inteiroCurto);

    printf("Tipo float: %.2f\n", real);
    printf("Tipo double: %.15f\n", realDouble);
    printf("Tipo long double: %.18Lf\n", realLongDouble);

    printf("Tipo char: %c\n", caractere);
    printf("Tipo unsigned char: %u\n", caractereNaoNegativo);

    printf("Tipo bool: %s\n", booleano ? "true" : "false");

    return 0;
}
