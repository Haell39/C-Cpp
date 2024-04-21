#include <stdio.h>

int main() {

    int opcao;
    float num1, num2, resultado;

    // Menu
    do {
        
        printf("\n====== MENU ======\n");
        printf("1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao); 

        // avalia a opção escolhida pelo usuário
        switch (opcao) {
            case 1: 
                printf("primeiro numero: ");
                scanf("%f", &num1); 
                printf("segundo numero: ");
                scanf("%f", &num2); 
                resultado = num1 + num2; 
                printf("Resultado da soma: %.2f\n", resultado); 
                break;
            case 2: 
                printf("primeiro numero: ");
                scanf("%f", &num1); 
                printf("segundo numero: ");
                scanf("%f", &num2); 
                resultado = num1 - num2; 
                printf("Resultado da subtracao: %.2f\n", resultado); 
                break;
            case 3: 
                printf("primeiro numero: ");
                scanf("%f", &num1); 
                printf("segundo numero: ");
                scanf("%f", &num2); 
                resultado = num1 * num2; 
                printf("Resultado da multiplicacao: %.2f\n", resultado); 
                break;
            case 4: 
                printf("primeiro numero: ");
                scanf("%f", &num1); 
                printf("segundo numero: ");
                scanf("%f", &num2); 
                if (num2 == 0) {
                    printf("Não é possivel dividir por zero!\n"); //divisão por zero
                } else {
                    resultado = num1 / num2; 
                    printf("Resultado da divisao: %.2f\n", resultado); 
                }
                break;
            case 5:  
                printf("Saindo...\n"); 
                break;
            default: // 
                printf("Opcao invalida! Tente denovo.\n"); 
        }
    } while (opcao != 5); //continua exibindo o menu até sair

    return 0;
}
