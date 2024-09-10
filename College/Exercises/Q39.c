#include <stdio.h>

int main()
{

    //* Calcular Fibonacci

    printf("Esses são os 10 primeiros números da sequência de Fibonacci: \n");

    int a = 0, b = 1, c, i;
    for (i=0; i<10; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c; 
        
    }


    return 0;
}