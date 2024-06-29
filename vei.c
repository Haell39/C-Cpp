#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição de constantes para o número máximo de veículos e o tamanho máximo de marca e modelo
#define MAX_VEICULOS 10
#define MAX_MARCA_MODELO 29

// Definição da estrutura Veiculo
struct Veiculo {
    char tipo[10]; // Tipo de veículo (Carro, Moto, Caminhão)
    char marca[MAX_MARCA_MODELO + 1]; // Marca do veículo
    char modelo[MAX_MARCA_MODELO + 1]; // Modelo do veículo
    int codigo; // Código do veículo
};

// Declaração das funções para registrar veículos e gerar relatório
void registrarVeiculo(struct Veiculo veiculos[], int *numVeiculos);
void gerarRelatorio(struct Veiculo veiculos[], int numVeiculos);

int main() {
    struct Veiculo veiculos[MAX_VEICULOS]; // Array para armazenar os veículos
    int numVeiculos = 0; // Contador de veículos registrados
    int opcao; // Variável para armazenar a opção do menu

    printf("----- Boa Tarde -----\n");
    do {
        // Exibição do menu
        printf("\n--- Menu ---\n");
        printf("[1] Registrar Veiculo\n");
        printf("[2] Gerar Relatorio\n");
        printf("[3] Sair\n");
        printf("Escolha uma opcao: ");

        // Leitura da opção do usuário
        if (scanf("%d", &opcao) != 1) {
            printf("Erro na leitura da opcao. Saindo do programa...\n");
            return 1;
        }

        // Execução da ação correspondente à opção escolhida
        switch (opcao) {
            case 1:
                registrarVeiculo(veiculos, &numVeiculos); // Registrar um novo veículo
                break;
            case 2:
                if (numVeiculos == 0) {
                    printf("Nenhum veiculo registrado. Registre um veiculo antes de gerar o relatorio.\n");
                } else {
                    gerarRelatorio(veiculos, numVeiculos); // Gerar relatório de veículos
                }
                break;
            case 3:
                printf("Saindo do programa...\n"); // Sair do programa
                break;
            default:
                printf("Opcao invalida!\n"); // Mensagem para opção inválida
        }
    } while (opcao != 3);

    return 0;
}

// Função para registrar um novo veículo
void registrarVeiculo(struct Veiculo veiculos[], int *numVeiculos) {
    if (*numVeiculos >= MAX_VEICULOS) {
        printf("Limite maximo de veiculos atingido!\n"); // Verifica se o limite de veículos foi atingido
        return;
    }

    printf("\nRegistro de Veiculo:\n");

    int tipo;
    do {
        // Leitura do tipo de veículo
        printf("--- Tipo de Veiculo ---\n[1] Carro\n[2] Moto\n[3] Caminhao\nQual opcao voce deseja: ");
        scanf("%d", &tipo);
        if (tipo < 1 || tipo > 3) {
            printf("Opcao invalida! Escolha 1, 2 ou 3.\n");
        }
    } while (tipo < 1 || tipo > 3);

    // Atribuição do tipo de veículo com base na opção escolhida
    strcpy(veiculos[*numVeiculos].tipo, (tipo == 1) ? "Carro" : (tipo == 2) ? "Moto" : "Caminhao");

    // Leitura da marca, modelo e código do veículo
    printf("Marca: ");
    scanf("%29s", veiculos[*numVeiculos].marca);
    printf("Modelo: ");
    scanf("%29s", veiculos[*numVeiculos].modelo);
    printf("Codigo: ");
    scanf("%d", &veiculos[*numVeiculos].codigo);

    (*numVeiculos)++; // Incrementa o contador de veículos registrados
    printf("Veiculo registrado com sucesso!\n");
}

// Função para gerar um relatório de veículos
void gerarRelatorio(struct Veiculo veiculos[], int numVeiculos) {
    FILE *arquivo;
    arquivo = fopen("relatorio.txt", "w"); // Abre um arquivo para escrita

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        exit(1); // Verifica se houve erro ao abrir o arquivo
    }

    fprintf(arquivo, "----- Relatorio de Veiculos -----\n\n"); // Escreve o cabeçalho do relatório
    for (int i = 0; i < numVeiculos; i++) {
        // Escreve as informações de cada veículo no arquivo
        fprintf(arquivo, "Veiculo %d:\n", i + 1);
        fprintf(arquivo, "  Tipo: %s\n", veiculos[i].tipo);
        fprintf(arquivo, "  Marca: %s\n", veiculos[i].marca);
        fprintf(arquivo, "  Modelo: %s\n", veiculos[i].modelo);
        fprintf(arquivo, "  Codigo: %d\n\n", veiculos[i].codigo);
    }

    fclose(arquivo); // Fecha o arquivo
    printf("Relatorio gerado com sucesso em 'relatorio.txt'!\n");
}
