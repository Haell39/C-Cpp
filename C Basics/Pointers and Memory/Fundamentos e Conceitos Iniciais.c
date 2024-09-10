#include <stdio.h>   // Biblioteca padrão para entrada e saída
#include <stdlib.h>  // Biblioteca padrão para alocação de memória

// Função para calcular a média de um array de inteiros
float calcular_media(int *numeros, int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i];  // Soma todos os elementos do array
    }
    return (float)soma / tamanho;  // Retorna a média como float
}

int main() {
    int tamanho;  // Variável para armazenar o tamanho do array
    int *numeros; // Ponteiro para armazenar o endereço do array dinamicamente alocado

    // Entrada do usuário
    printf("Digite o número de elementos: ");
    scanf("%d", &tamanho);

    // Alocação dinâmica de memória para o array
    numeros = (int *)malloc(tamanho * sizeof(int));
    if (numeros == NULL) { // Verificação se a alocação falhou
        printf("Erro de alocação de memória!\n");
        return 1;
    }

    // Recebe os elementos do array do usuário
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Calcula a média usando uma função
    float media = calcular_media(numeros, tamanho);

    // Comandos condicionais: if-else
    if (media > 0) {
        printf("A média é positiva: %.2f\n", media);
    } else if (media < 0) {
        printf("A média é negativa: %.2f\n", media);
    } else {
        printf("A média é zero.\n");
    }

    // Comando de repetição: while
    int opcao = 1;
    while (opcao != 0) {
        printf("Digite 0 para sair ou 1 para calcular a média novamente: ");
        scanf("%d", &opcao);

        switch (opcao) { // Comando de controle: switch-case
            case 0:
                printf("Saindo do programa...\n");
                break;
            case 1:
                printf("Digite o número de elementos: ");
                scanf("%d", &tamanho);
                numeros = (int *)realloc(numeros, tamanho * sizeof(int)); // Realoca memória

                if (numeros == NULL) {  // Verificação se a realocação falhou
                    printf("Erro de alocação de memória!\n");
                    return 1;
                }

                for (int i = 0; i < tamanho; i++) {
                    printf("Digite o número %d: ", i + 1);
                    scanf("%d", &numeros[i]);
                }
                
                media = calcular_media(numeros, tamanho);
                printf("Nova média: %.2f\n", media);
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    }

    // Liberação de memória
    free(numeros);

    return 0;
}
