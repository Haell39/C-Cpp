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

    //? Matrizes (Arrays Multidimensionais)

    //* Uma matriz em C é um vetor de vetores. Vamos ver como declarar, inicializar e acessar elementos de uma matriz.

    // Declaração e Inicialização

    int matriz[2][3]; // 2 linhas, 3 colunas

    //*Inicializar:

    int matrizA[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    //* acessar elementos de uma matriz:

    printf("Elemento na linha 1, coluna 2: %d\n", matrizA[1][2]); // acessa o elemento na linha 1, coluna 2 (6):

    /*
    Matriz[0][0] = 1
    Matriz[0][1] = 2
    Matriz[0][2] = 3
    Matriz[1][0] = 4
    Matriz[1][1] = 5
    Matriz[1][2] = 6 //* perceba que aqui está o elemento 6, na linha indice 1(que é a linha real 2) e na coluna indice 2(que é a coluna real 3)

    */

    //* percorrendo toda matriz:
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Matriz[%d][%d] = %d\n", i, j, matrizA[i][j]);
        }
    }

    //* Organizando a matriz:

    int matrizB[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        printf("|"); //* barra da matiz
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ", matrizB[i][j]); //* espaçamento entre o %d para os elementos da matriz ficarem espaçados e organizados
        }
        printf("|\n"); //* barra da matiz
    }

    /*
        ?Resumo:

        (*): Vetores (Arrays): Coleções de elementos do mesmo tipo. Acessados por índices.
        (*): Strings: Vetores de caracteres terminados por '\0'. Manipulados com funções da biblioteca string.h.
        (*): Matrizes (Arrays Multidimensionais): Vetores de vetores, acessados por múltiplos índices.

    */

    return 0;
}