#include <stdio.h> // inclui a biblioteca padrão para entrada e saída de dados
#include <math.h>  // inclui a biblioteca padrão para operações matemáticas

int main() // função principal do programa
{

    float a, b, c, x1, x2; // declara 5 variáveis do tipo float para armazenar os valores de 'a', 'b', 'c', 'x1' e 'x2'

    printf("leia o valor de: a\n");
    scanf("%f", &a);

    printf("leia o valor de: b\n");
    scanf("%f", &b);

    printf("leia o valor de: c\n"); 
    scanf("%f", &c); 

    // Para calcular a equação do segundo grau, é necessário
    // que o termo quadrático (b^2 - 4ac) seja positivo,
    // o que significa que 'b' deve ser multiplicado por -1
    // para garantir que o valor calculado com a função sqrt() 
    // seja sempre positivo.

    x1 = (b - sqrt(b * b - 4 * a * c)) / (2 * a); // calcula o valor de 'x1' usando a fórmula da equação do segundo grau

    x2 = (b + sqrt(b * b - 4 * a * c)) / (2 * a); // calcula o valor de 'x2' usando a fórmula da equação do segundo grau

    printf("x linha = %.2f x 2linhas = %.2f", x1, x2); // imprime os valores de 'x1' e 'x2' formatados com 2 casas decimais

    return 0; // retorna o valor 0, indicando que a execução foi bem sucedida
}

