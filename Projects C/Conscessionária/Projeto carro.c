#include <stdio.h>
#include <stdlib.h> // Incluida para usar a função exit()

#define MAX_CARROS 10 // Define a quantidade máxima de carros
#define MAX_MARCA_MODELO 29 // Tamanho máximo para marca e modelo

// Estrutura do carro
struct carro {
    char marca[MAX_MARCA_MODELO + 1]; // +1 para o caractere nulo '\0'
    char modelo[MAX_MARCA_MODELO + 1];
    int codigoDeVeiculo;
};

void registrarCarro(struct carro carros[], int *numCarros);
void gerarRelatorio(struct carro carros[], int numCarros);

int main() {
    int opcao;
    struct carro carros[MAX_CARROS]; // Array para armazenar os carros
    int numCarros = 0; // Contador de carros registrados

    printf("----- Boa Tarde -----\n");
    do {
        printf("\nMenu:\n");
        printf("[1] Registrar Carro\n");
        printf("[2] Registrar Moto (Ainda nao implementado)\n");
        printf("[3] Registrar Caminhao (Ainda nao implementado)\n");
        printf("[4] Gerar Relatorio\n");
        printf("[0] Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                registrarCarro(carros, &numCarros);
                break;
            case 4:
                gerarRelatorio(carros, numCarros);
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}

// Função para registrar um carro
void registrarCarro(struct carro carros[], int *numCarros) {
    if (*numCarros >= MAX_CARROS) {
        printf("Limite maximo de carros atingido!\n");
        return;
    }

    printf("\nRegistro de Carro:\n");
    printf("Marca do veiculo: ");
    scanf("%29s", carros[*numCarros].marca); // Lê a marca diretamente no array
    printf("Modelo do veiculo: ");
    scanf("%29s", carros[*numCarros].modelo); // Lê o modelo diretamente no array
    printf("Codigo do veiculo: ");
    scanf("%d", &carros[*numCarros].codigoDeVeiculo); // Lê o código diretamente no array

    (*numCarros)++; // Incrementa o contador de carros

    printf("Carro registrado com sucesso!\n");
}

// Função para gerar relatório
void gerarRelatorio(struct carro carros[], int numCarros) {
    FILE *arquivo;
    arquivo = fopen("relatorio.txt", "w"); // Abre o arquivo para escrita (sobrescreve se existir)

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        exit(1); // Encerra o programa com erro
    }

    fprintf(arquivo, "----- Relatorio de Veiculos -----\n\n");
    for (int i = 0; i < numCarros; i++) {
        fprintf(arquivo, "Carro %d:\n", i + 1);
        fprintf(arquivo, "  Marca: %s\n", carros[i].marca);
        fprintf(arquivo, "  Modelo: %s\n", carros[i].modelo);
        fprintf(arquivo, "  Codigo: %d\n\n", carros[i].codigoDeVeiculo);
    }

    fclose(arquivo);

    printf("Relatorio gerado com sucesso em 'relatorio.txt'!\n");
}
