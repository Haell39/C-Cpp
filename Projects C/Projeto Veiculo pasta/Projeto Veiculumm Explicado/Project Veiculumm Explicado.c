#include <stdio.h>
#include <stdlib.h> // alocação de memória 
#include <string.h> // manipulação de strings 

//? Definição de constantes para o número máximo de veículos e o tamanho máximo de marca e modelo
#define MAX_VEICULOS 10
#define MAX_MARCA_MODELO 29

//? Definição da estrutura Veiculo

//*Em C, strings são terminadas com um caractere especial chamado "null terminator" ('\0'). Esse caractere indica o fim da string.
//* Para armazenar esses 29 caracteres mais o caractere '\0', precisamos de um array com 30 posições (29 + 1).
struct Veiculo { //Organiza os dados dos veículos
    char tipo[10]; // Tipo de veículo (Carro, Moto, Caminhão)
    char marca[MAX_MARCA_MODELO + 1]; // Marca do veículo 
    char modelo[MAX_MARCA_MODELO + 1]; // Modelo do veículo
    int codigo; // Código do veículo
    // Se MAX_MARCA_MODELO fosse 29, e você tivesse uma marca com exatamente 29 caracteres, seria algo assim: //*"MarcaComExatamenteVinteENoveCaractere"
    // Para armazenar essa string, você precisa de um array com 30 posições: //* {'M', 'a', 'r', 'c', 'a', 'C', 'o', 'm', 'E', 'x', 'a', 't', 'a', 'm', 'e', 'n', 't', 'e', 'V', 'i', 'n', 't', 'e', 'E', 'N', 'o', 'v', 'e', 'C', '\0'}
    //* Ou seja: +1 nos Arrays marca e modelo: Garante espaço para o caractere de terminação '\0', necessário para strings em C.
};

//? Declaração das funções para registrar veículos e gerar relatório
void registrarVeiculo(struct Veiculo veiculos[], int *numVeiculos);
void gerarRelatorio(struct Veiculo veiculos[], int numVeiculos);

int main() {
    struct Veiculo veiculos[MAX_VEICULOS]; // Array para armazenar os veículos
    int numVeiculos = 0; // Contador de veículos registrados
    int opcao; // Variável para armazenar a opção do menu

    printf("----- Boa Tarde -----\n");
    do {
        //* Exibição do menu
        printf("\n--- Menu ---\n");
        printf("[1] Registrar Veiculo\n");
        printf("[2] Gerar Relatorio\n");
        printf("[3] Sair\n");
        printf("Escolha uma opcao: ");

        //? Leitura da opção do usuário
        if (scanf("%d", &opcao) != 1) {
            printf("Erro na leitura da opcao. Saindo do programa...\n");
            return 1;
        }

        //? Execução da ação correspondente à opção escolhida
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

//? Função para registrar um novo veículo:
/*
*Function signature The code defines a function named registrarVeiculo, which takes two parameters:
*struct Veiculo veiculos[]: an array of struct Veiculo elements. This is an array of structures, where each structure represents a vehicle.
*int *numVeiculos: a pointer to an integer variable that keeps track of the number of vehicles registered.
*Function body The function does the following:
*/

void registrarVeiculo(struct Veiculo veiculos[], int *numVeiculos) {
    if (*numVeiculos >= MAX_VEICULOS) {
        printf("Limite maximo de veiculos atingido!\n"); // Verifica se o limite de veículos foi atingido
        return;
    } //*The first line of the function checks if the number of vehicles registered (*numVeiculos) has reached the maximum limit (MAX_VEICULOS). If it has, the function prints an error message saying "Limite maximo de veiculos atingido!" (which means "Maximum vehicle limit reached!").

    printf("\nRegistro de Veiculo:\n");

    /*
    *This code is used to get the type of vehicle from the user. Here's what's happening:
    *The do-while loop is used to repeatedly ask the user for input until a valid option is chosen.
    *Inside the loop, the program prints a menu with three options: Carro (1), Moto (2), and Caminhao (3).
    *The user's input is stored in the tipo variable using scanf.
    *If the input is invalid (less than 1 or greater than 3), the program prints an error message and loops back to ask again.
    *The loop continues until the user enters a valid option (1, 2, or 3).
    */
    int tipo;
    do {
        // Leitura do tipo de veículo
        printf("--- Tipo de Veiculo ---\n[1] Carro\n[2] Moto\n[3] Caminhao\nQual opcao voce deseja: ");
        scanf("%d", &tipo);
        if (tipo < 1 || tipo > 3) {
            printf("Opcao invalida! Escolha 1, 2 ou 3.\n");
        }
    } while (tipo < 1 || tipo > 3);

    //? Atribuição do tipo de veículo com base na opção escolhida
    strcpy(veiculos[*numVeiculos].tipo, (tipo == 1) ? "Carro" : (tipo == 2) ? "Moto" : "Caminhao");
    /*
    *This line sets the tipo field of the current vehicle structure (veiculos[*numVeiculos].tipo) based on the user's input. Here's how it works:
    *The ternary operator is used to choose the correct string based on the value of tipo.
    *If tipo is 1, the string "Carro" is chosen.
    *If tipo is 2, the string "Moto" is chosen.
    *If tipo is 3, the string "Caminhao" is chosen.
    *The strcpy function is used to copy the chosen string into the tipo field of the vehicle structure.
    */

    //? Leitura da marca, modelo e código do veículo
    /*
        *This code is used to get the vehicle's details (marca, modelo, and código) from the user. Here's what's happening:

    *The program prompts the user to enter the marca (brand), modelo (model), and código (code) of the vehicle.
    *The user's input is stored in the corresponding fields of the vehicle structure using scanf.
    *The %29s format specifier is used to limit the input to 29 characters for the marca and modelo fields.
    */
    printf("Marca: ");
    scanf("%29s", veiculos[*numVeiculos].marca);
    printf("Modelo: ");
    scanf("%29s", veiculos[*numVeiculos].modelo);
    printf("Codigo: ");
    scanf("%d", &veiculos[*numVeiculos].codigo);

    (*numVeiculos)++; // Incrementa o contador de veículos registrados
    printf("Veiculo registrado com sucesso!\n");
} // This code is used to update the vehicle count and print a




//? Função para gerar um relatório de veículos
//*This is a C function named gerarRelatorio. It takes two parameters:
//*veiculos: an array of struct Veiculo (which represents a vehicle) numVeiculos: an integer representing the number of vehicles in the array

void gerarRelatorio(struct Veiculo veiculos[], int numVeiculos) {
    FILE *arquivo; //* The function opens a file named "relatorio.txt" in write mode ("w"). If the file doesn't exist, it will be created. If it does exist, its contents will be overwritten.


    arquivo = fopen("relatorio.txt", "w"); // Abre um arquivo para escrita

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        exit(1); // Verifica se houve erro ao abrir o arquivo
    } 
    /*
    *If the file cannot be opened (e.g., due to permissions issues or disk errors), the function checks for errors by verifying that the arquivo pointer is not NULL. If it is NULL, an error message is printed, and the program exits with a status code of 1 using the exit function.
    */

    fprintf(arquivo, "----- Relatorio de Veiculos -----\n\n"); // Escreve o cabeçalho do relatório
    for (int i = 0; i < numVeiculos; i++) {
        // Escreve as informações de cada veículo no arquivo
        fprintf(arquivo, "Veiculo %d:\n", i + 1);
        fprintf(arquivo, "  Tipo: %s\n", veiculos[i].tipo);
        fprintf(arquivo, "  Marca: %s\n", veiculos[i].marca);
        fprintf(arquivo, "  Modelo: %s\n", veiculos[i].modelo);
        fprintf(arquivo, "  Codigo: %d\n\n", veiculos[i].codigo);
    }
    /*
        *The function loops through the veiculos array using a for loop, iterating numVeiculos times. For each vehicle, it writes the following information to the file:
        *"Veiculo X:" (where X is the vehicle number, starting from 1)
        *"Tipo: <vehicle type>"
        *"Marca: <vehicle brand>"
        *"Modelo: <vehicle model>"
        *"Codigo: <vehicle code>"
        *The fprintf function is used to write these strings to the file, with placeholders for the actual values (e.g., %s for strings, %d for integers).
    */

    fclose(arquivo); // Finally, the function closes the file using fclose to release system resources.

    printf("Relatorio gerado com sucesso em 'relatorio.txt'!\n");
}
//*The function prints a success message to the console, indicating that the report has been generated successfully.
