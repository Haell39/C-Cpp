#include <stdio.h> // Importa a biblioteca padrão para entrada e saída

// Função para calcular a área de um trapezio
float trapezio(float a, float b, float c)
{
    // Calcula a área do trapezio utilizando a fórmula:
    // Área = ((baseMaior + baseMenor) / 2) * altura
    float area = ((a + b) / 2.0) * c;
    return area;
}

int main()
{
    // Declara 3 variáveis para armazenar as medidas
    float baseMaior, baseMenor, altura;

    // Pede para o usuário inserir as medidas do trapezio
    printf("Insira a base maior do trapezio: ");
    scanf("%f", &baseMaior); // Lê a medida inserida e armazena na variável baseMaior
    printf("Insira a base menor do trapezio: ");
    scanf("%f", &baseMenor); // Lê a medida inserida e armazena na variável baseMenor
    printf("Insira a altura do trapezio: ");
    scanf("%f", &altura); // Lê a medida inserida e armazena na variável altura

    // Chama a função trapezio com as medidas inseridas
    // e armazena o resultado em uma nova variável

    //! OBS:
    //* Quando você chama uma função em C e passa argumentos para ela,
    //* os valores dos argumentos são atribuídos aos parâmetros da função na ordem em que são declarados.
    //* Portanto, quando você chama a função `trapezio` com os argumentos `baseMaior`, `baseMenor` e `altura`,
    //* esses valores são atribuídos aos parâmetros `a`, `b` e `c` da função `trapezio` na mesma ordem.
    //* Isso garante que os valores sejam utilizados corretamente dentro da função.
    float areaTrapezio = trapezio(baseMaior, baseMenor, altura);

    // Imprime o resultado para o usuário
    printf("A área do trapezio é: %.2f\n", areaTrapezio);

    return 0; // Indica que o programa terminou com sucesso
}
