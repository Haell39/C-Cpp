#include <stdio.h>

int main()
{

    //? Vectors

    /*

    //* Um vetor em C é uma coleção de elementos do mesmo tipo, armazenados em locais de memória consecutivos. Vamos ver como declarar, inicializar e acessar elementos de um vetor.

    Declaração e Inicialização

   //* Para declarar um vetor em C, você especifica o tipo de dados, o nome do vetor e o número de elementos. Por exemplo:

    */

    int numeros[5]; // Declara um vetor de 5 inteiros

    int numeros2[5] = {1, 2, 3, 4, 5}; // Declara um vetor de 5 inteiros e inicializa com os valores 1, 2, 3, 4 e 5 manualmente/diretamente
    printf("numeros2: %d %d %d %d %d\n", numeros2[0], numeros2[1], numeros2[2], numeros2[3], numeros2[4]);

    // Inicializando elemenro por elemento:
    numeros[0] = 1;
    numeros[1] = 2;
    numeros[2] = 3;
    numeros[3] = 4;
    numeros[4] = 5;
    printf("numeros: %d %d %d %d %d\n", numeros[0], numeros[1], numeros[2], numeros[3], numeros[4]);

    // acessando elementos de um vetor usando o indice
    int num2[5] = {1, 2, 3, 4, 5};
    printf("O primeiro elemento eh %d\n", num2[0]);
    printf("O terceiro elemento eh %d\n", num2[2]);

    //? Strings

    /*
    Uma string em C é um vetor de caracteres terminado por um caractere nulo ('\0'). Vamos ver como declarar, inicializar e manipular strings.

    Declaração e Inicialização
    */

    //* Para declarar uma string, você usa um vetor de char:
    char saudacao2[6] = {'O', 'l', 'a', '!', '\0'};
    printf("Saudacao: %s", saudacao2);

    //* Ou mais conveniente, você pode usar uma string literal:
    char saudacao[] = "Ola!";
    printf("\nSaudacao: %s\n", saudacao);

    //* Manipulando strings

    // Você pode usar funções da biblioteca string.h para manipular strings. Por exemplo, para copiar uma string:

    char origem[] = "Ola, mundo!";
    char destino[20];

    strcpy(destino, origem); // Copia origem para destino
    printf("Destino: %s\n", destino);

    

    return 0;
}