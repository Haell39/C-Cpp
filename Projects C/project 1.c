#include <stdio.h>

// Função para calcular a média
float calcularMedia(float nota1, float nota2, float nota3) {
    return (nota1 + nota2 + nota3) / 3.0;
}

int main() {
    int opcao;
    float nota1, nota2, nota3;
    
    do {
        printf("\nMENU:\n");
        printf("1. Calcular média\n");
        printf("2. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1:
                printf("Digite a nota 1: ");
                scanf("%f", &nota1);
                printf("Digite a nota 2: ");
                scanf("%f", &nota2);
                printf("Digite a nota 3: ");
                scanf("%f", &nota3);
                
                // Calcula e exibe a média
                printf("A média é: %.2f\n", calcularMedia(nota1, nota2, nota3));
                break;
            case 2:
                printf("Encerrando o programa. Obrigado!\n");
                break;
            default:
                printf("Opção inválida! Escolha novamente.\n");
        }
    } while(opcao != 2);
    
    return 0;
}
