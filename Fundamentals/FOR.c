#include <stdio.h>

int main()
{

    int count, count2, count3; 

    // Inicia contador em 0 e termina em 10
    // Imprime o valor do contador na tela
    for (count = 0; count <= 10; count++)
    {
        printf("%d\n", count); // Imprime o contador na tela
    }
    
    // Inicia contador em 10 e termina em 0
    // Imprime "Hello World" na tela
    for (count2 = 10; count2 > 0; count2--)
    {
        printf("Hello World\n"); // Imprime na tela
    }
    
    
    // Inicia contador em 0 e termina em 100
    // Imprime o valor do contador em incrementos de 10
    for (count3 = 0; count3 <= 100; count3 = count3 + 10)
    {
        printf("%d\n", count3); // Imprime o contador na tela
    }

    return 0;
}