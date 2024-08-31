#include <stdio.h>
#include <stdlib.h>

// Define uma estrutura chamada Person com os campos name e age
struct Person {
    char name[50]; // Campo para o nome da pessoa
    int age;       // Campo para a idade da pessoa
};

// Função que atualiza o campo age de uma estrutura Person
void updateStruct(struct Person *p, int age) 
{
    p->age = age; // Atualiza a idade da pessoa
}

int main(int argc, char **argv) 
{
    struct Person lowcoding; // Declara uma variável do tipo struct Person
    updateStruct(&lowcoding, 25); // Chama a função para atualizar a idade para 25
    
    // Imprime o resultado
    printf("Idade atualizada: %d\n", lowcoding.age); // Deve imprimir "Idade atualizada: 25"
    
    return 0; // Indica que o programa terminou com sucesso
}
