#include <stdio.h>

int main()
{
    // Declarar variáveis
    int dia, mes;

    // Menu
    printf("Bem-vindo ao verificador de signo!\n");
    printf("Digite o dia em que nasceu: ");
    scanf("%d", &dia); 
    printf("Agora em que mes nasceu (EM NUMEROS!): ");
    scanf("%d", &mes); 

    // Determinar o signo 
    if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19))
    {
        printf("Seu signo e Aries.\n");
    }
    else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20))
    {
        printf("Seu signo e Touro.\n");
    }
    else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20))
    {
        printf("Seu signo e Gemeos.\n");
    }
    else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22))
    {
        printf("Seu signo e Cancer.\n");
    }
    else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22))
    {
        printf("Seu signo e Leao.\n");
    }
    else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22))
    {
        printf("Seu signo e Virgem.\n");
    }
    else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22))
    {
        printf("Seu signo e Libra.\n");
    }
    else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21))
    {
        printf("Seu signo e Escorpiao.\n");
    }
    else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21))
    {
        printf("Seu signo e Sagitario.\n");
    }
    else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19))
    {
        printf("Seu signo e Capricornio.\n");
    }
    else if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18))
    {
        printf("Seu signo e Aquario.\n");
    }
    else if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20))
    {
        printf("Seu signo e Peixes.\n");
    }
    else
    {
        printf("Data de nascimento invalida.\n");
    }

    return 0;
}
