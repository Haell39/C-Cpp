#include <stdio.h>  // Biblioteca padrão para entrada e saída
#include <stdlib.h> // Biblioteca padrão para alocação de memória dinâmica
#include <stdbool.h> // Biblioteca padrão para tipos booleanos

int main() {
    int dia, mes; // Variáveis para armazenar o dia e mês de nascimento do usuário
    const char *signos[] = {"Capricórnio", "Aquário", "Peixes", "Áries", "Touro", "Gêmeos", "Câncer", "Leão", "Virgem", "Libra", "Escorpião", "Sagitário"};
    // Array contendo o último dia de cada mês correspondente a cada signo
    //É necessário pq os limites são distintos
    const int datas[] = {19, 18, 20, 19, 20, 20, 22, 22, 22, 22, 21, 21};
    char continuar; // Variável para armazenar a resposta do usuário

    do {
        // Loop perguntando se o usuário deseja verificar outro signo

        printf("\n====== ZODÍACO TRADICIONAL ======\n"); // Imprime o título do programa

        printf("Digite o dia em que nasceu: "); // Imprime a pergunta para o usuário
        scanf("%d", &dia); // Lê a entrada do usuário e armazena em dia

        printf("Agora o mês em que nasceu (EM NÚMEROS!): "); // Imprime a pergunta para o usuário
        scanf("%d", &mes); // Lê a entrada do usuário e armazena em mes

        if ((dia >= 1 && dia <= 31) && (mes >= 1 && mes <= 12)) { // Verifica se o dia e mês estão dentro dos limites válidos
            // Verifica se o dia de nascimento está dentro do intervalo correto para o mês e signo
            // Se o mês for igual a 12 (Dezembro) e o dia for maior ou igual a 22, ou se o mês for igual a 1 (Janeiro) e o dia for menor ou igual a 19, ou se o dia for menor ou igual ao último dia do mês correspondente ao signo
            if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19) || (dia <= datas[mes - 1])) {
                printf("Seu signo é %s.\n", signos[mes - 1]); // Imprime o signo correspondente ao mês e dia informados
            } else {
                printf("Seu signo é %s.\n", signos[mes % 12]); // Se o dia estiver fora do intervalo, verifica se o mês é igual a 12 (Dezembro), se for, então o signo é o primeiro, se não, é o módulo 12 do mês (ou seja, o signo que vem após o atual)
            }
        } else {
            printf("Data de nascimento inválida.\n"); // Imprime mensagem de erro caso o dia ou mês estejam fora dos limites válidos
        }

        // Pergunta ao usuário se deseja verificar outro signo
        printf("Deseja verificar outro signo? (s/n): ");
        scanf(" %c", &continuar); // Lê a entrada do usuário e armazena em continuar, com um espaço antes do %c para consumir o caractere de nova linha residual

    } while (continuar == 's' || continuar == 'S'); // Repete o loop caso o usuário deseje continuar

    return 0; // Indica que o programa foi executado com sucesso
}
