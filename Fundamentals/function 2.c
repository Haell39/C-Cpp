#include <stdio.h>

// Função para calcular a média de 3 notas
float calcularMedia(float nota1, float nota2, float nota3) {
    return (nota1 + nota2 + nota3) / 3.0;
}

int main() {
    // Exemplo de como utilizar a função criada
    float media = calcularMedia(8.0, 7.0, 9.0);
    printf("A média é: %.2f\n", media); // Imprime a média

    // Comentei o código acima para explicar o que está acontecendo
    // A função calcularMedia recebe 3 parametros float: nota1, nota2 e nota3
    // A função retorna a média dessas 3 notas
    // A linha abaixo chama a função com 3 valores float como parametros e armazena o retorno em uma variável float chamada media
    // A linha abaixo imprime a variável media com 2 casas decimais

    return 0;
}

