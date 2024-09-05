#include <stdio.h>

// Definindo uma struct para representar uma pessoa
struct Pessoa {
    char nome[50];
    int idade;
};

// Função para exibir informações de uma pessoa
void exibirPessoa(struct Pessoa p) {
    printf("Nome: %s, Idade: %d\n", p.nome, p.idade);
}

int main() {
    struct Pessoa pessoa1 = {"Rafael", 25};
    exibirPessoa(pessoa1);
    return 0;
}
