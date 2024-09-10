#include <stdio.h>

// 1. Ponteiros
void incrementar(int *numero) { // Função que recebe um ponteiro para um inteiro
    (*numero)++; // Incrementa o valor apontado pelo ponteiro
}

// 2. Structs (Estruturas)
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

// 3. Typedef (Definir Novos Tipos)
typedef struct Pessoa Pessoa; // Cria um novo tipo chamado "Pessoa"

// 4. Enumerações (Enums)
enum DiasSemana {
    DOMINGO, SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO
};

int main() {

    // Ponteiros
    int valor = 5;
    int *ptr = &valor; // Ponteiro 'ptr' armazena o endereço de 'valor'
    printf("Valor original: %d\n", valor);
    incrementar(ptr); // Passa o ponteiro para a função 'incrementar'
    printf("Valor após incremento: %d\n", valor);

    // Structs
    Pessoa joao; // Cria uma variável do tipo "Pessoa"
    strcpy(joao.nome, "João"); // Copia a string "João" para o campo 'nome'
    joao.idade = 30;
    joao.altura = 1.75;

    printf("Nome: %s\n", joao.nome);
    printf("Idade: %d\n", joao.idade);
    printf("Altura: %.2f\n", joao.altura);

    // Typedef
    Pessoa maria; // Cria outra variável do tipo "Pessoa" (usando o typedef)
    strcpy(maria.nome, "Maria");
    maria.idade = 25;
    maria.altura = 1.68;

    // Enumerações
    enum DiasSemana hoje = QUARTA;
    printf("Hoje é %d\n", hoje); // Imprime 3 (o valor de QUARTA na enumeração)

    return 0;
}
