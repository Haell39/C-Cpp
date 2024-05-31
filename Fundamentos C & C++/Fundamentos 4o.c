#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição de uma estrutura
struct Person {
    char name[50];
    int age;
};

// Função para somar dois números inteiros (passagem de argumentos por valor)
int add(int a, int b) {
    return a + b;
}

// Função para atualizar a idade de uma pessoa (passagem de argumentos por referência)
void updateAge(struct Person *p, int newAge) {
    p->age = newAge;
}

int main() {
    // Declaração de variáveis e tipos de dados
    int a = 10, b = 20;
    float f = 5.5;
    char c = 'A';

    // Operadores aritméticos
    int sum = a + b;
    int diff = a - b;
    int prod = a * b;
    float div = (float)a / b;

    // Operadores relacionais e lógicos
    int isEqual = (a == b);
    int isGreater = (a > b);
    int andOperation = (a > 5 && b > 15);
    int orOperation = (a > 5 || b > 25);

    // Estruturas de controle de fluxo
    if (a > b) {
        printf("a é maior que b\n");
    } else {
        printf("a não é maior que b\n");
    }

    // Switch case
    switch (c) {
        case 'A':
            printf("A é a primeira letra do alfabeto\n");
            break;
        case 'B':
            printf("B é a segunda letra do alfabeto\n");
            break;
        default:
            printf("Outra letra\n");
    }

    // Estruturas de repetição
    // Loop for
    for (int i = 0; i < 5; i++) {
        printf("for loop: i = %d\n", i);
    }

    // Loop while
    int count = 0;
    while (count < 5) {
        printf("while loop: count = %d\n", count);
        count++;
    }

    // Loop do-while
    count = 0;
    do {
        printf("do-while loop: count = %d\n", count);
        count++;
    } while (count < 5);

    // Arrays e strings
    int numbers[5] = {1, 2, 3, 4, 5};
    char str[20] = "Hello, World!";
    printf("Array numbers: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\nString: %s\n", str);

    // Uso de funções
    int result = add(a, b);
    printf("Soma de %d e %d é %d\n", a, b, result);

    // Uso de estruturas (structs)
    struct Person person;
    strcpy(person.name, "John Doe");
    person.age = 30;
    printf("Pessoa: %s, Idade: %d\n", person.name, person.age);

    // Atualizar a idade usando passagem de argumentos por referência
    updateAge(&person, 35);
    printf("Pessoa: %s, Idade Atualizada: %d\n", person.name, person.age);

    // Ponteiros e manipulação de memória
    int *p = (int *)malloc(sizeof(int) * 5); // Alocação dinâmica de memória para 5 inteiros
    if (p == NULL) {
        printf("Falha na alocação de memória\n");
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        p[i] = i * 10;
    }
    printf("Valores alocados dinamicamente: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");
    free(p); // Liberação da memória alocada

    // Entrada e saída
    char filename[50] = "example.txt";
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }
    fprintf(file, "Escrevendo no arquivo de exemplo.\n");
    fclose(file);

    // Leitura do arquivo
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }
    char line[100];
    while (fgets(line, sizeof(line), file)) {
        printf("Linha do arquivo: %s", line);
    }
    fclose(file);

    return 0;
}
