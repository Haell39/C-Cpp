#include <stdio.h>

// Função para multiplicar
int multiplicar(int a, int b) // Definição da função
{
    int res;
    res = a * b; // Cálculo da função
    return res;  // Retorna o valor do cálculo da função
}

int main(void) //! O programa começa a executar o codigo pela função main
{
    int x, y, resultado;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &x, &y);

    // Chamando a função
    resultado = multiplicar(x, y);

    printf("O resultado da multiplicacao eh = %d\n", resultado);

    return 0; // Indicar que o programa terminou corretamente
}
