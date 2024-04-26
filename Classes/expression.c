#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int dia, mes;
    const char *signos[] = {"Capricórnio", "Aquário", "Peixes", "Áries", "Touro", "Gêmeos","Câncer", "Leão", "Virgem", "Libra", "Escorpião", "Sagitário"};
    // Array contendo o último dia de cada mês correspondente a cada signo
    //É necessário pq os limites são distintos
    const int datas[] = {19, 18, 20, 19, 20, 20, 22, 22, 22, 22, 21, 21};
    char continuar;

    do {
        printf("\n====== ZODÍACO TRADICIONAL ======\n");
        printf("Digite o dia em que nasceu: ");
        scanf("%d", &dia);
        printf("Agora o mês em que nasceu (EM NÚMEROS!): ");
        scanf("%d", &mes);

        if ((dia >= 1 && dia <= 31) && (mes >= 1 && mes <= 12)) {
            // Verifica se o dia de nascimento está dentro do intervalo correto para o mês e signo
            if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19) || (dia <= datas[mes - 1])) {
                printf("Seu signo é %s.\n", signos[mes - 1]);
            } else {
                printf("Seu signo é %s.\n", signos[mes % 12]);
            }
        } else {
            printf("Data de nascimento inválida.\n");
        }

        // Pergunta ao usuário se deseja verificar outro signo
        printf("Deseja verificar outro signo? (s/n): ");
        scanf(" %c", &continuar); // Note o espaço antes de %c para consumir o caractere de nova linha residual

    } while (continuar == 's' || continuar == 'S'); // Repete o loop se o usuário desejar continuar

    return 0;
}