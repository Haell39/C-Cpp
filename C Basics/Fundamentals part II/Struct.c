#include <stdio.h>

// Definição da estrutura (struct) para representar um livro
struct Livro
{
    char titulo[100];
    char autor[100];
    int ano;
};

int main()
{
    // Declarando uma variável do tipo struct Livro
    struct Livro livro1;

    // Preenchendo os campos da struct
    printf("Digite o título do livro: ");
    scanf("%s", livro1.titulo);

    printf("Digite o autor do livro: ");
    scanf("%s", livro1.autor);

    printf("Digite o ano de publicacao do livro: ");
    scanf("%d", &livro1.ano);

    // Exibindo as informações do livro
    printf("\nInformacoes do livro:\n");
    printf("Titulo: %s\n", livro1.titulo);
    printf("Autor: %s\n", livro1.autor);
    printf("Ano de publicacao: %d\n", livro1.ano);

    return 0;
}
