#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_VEICULOS 10
#define MAX_MARCA_MODELO 29

struct Veiculo {
    char tipo[10];
    char marca[MAX_MARCA_MODELO + 1];
    char modelo[MAX_MARCA_MODELO + 1];
    int codigo;
};

void registrarVeiculo(struct Veiculo veiculos[], int *numVeiculos, int tipo);
void gerarRelatorio(struct Veiculo veiculos[], int numVeiculos);

int main() {
    struct Veiculo veiculos[MAX_VEICULOS];
    int numVeiculos = 0;
    int opcao;

    printf("----- Boa Tarde -----\n");
    do {
        printf("\nMenu:\n");
        printf("[1] Registrar Carro\n");
        printf("[2] Registrar Moto\n");
        printf("[3] Registrar Caminhão\n");
        printf("[4] Gerar Relatório\n");
        printf("[0] Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 3) {
            registrarVeiculo(veiculos, &numVeiculos, opcao);
        } else if (opcao == 4) {
            gerarRelatorio(veiculos, numVeiculos);
        } else if (opcao != 0) {
            printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}

void registrarVeiculo(struct Veiculo veiculos[], int *numVeiculos, int tipo) {
    if (*numVeiculos >= MAX_VEICULOS) {
        printf("Limite máximo de veículos atingido!\n");
        return;
    }

    printf("\nRegistro de %s:\n", (tipo == 1) ? "Carro" : (tipo == 2) ? "Moto" : "Caminhão");
    strcpy(veiculos[*numVeiculos].tipo, (tipo == 1) ? "Carro" : (tipo == 2) ? "Moto" : "Caminhão");

    printf("Marca: ");
    scanf("%29s", veiculos[*numVeiculos].marca);
    printf("Modelo: ");
    scanf("%29s", veiculos[*numVeiculos].modelo);
    printf("Código: ");
    scanf("%d", &veiculos[*numVeiculos].codigo);

    (*numVeiculos)++;
    printf("%s registrado com sucesso!\n", (tipo == 1) ? "Carro" : (tipo == 2) ? "Moto" : "Caminhão");
}

// ... (função gerarRelatorio permanece a mesma)
