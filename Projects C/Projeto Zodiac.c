#include <stdio.h>

int main()
{

    int opcao, dia, mes;

    // Menu
    do
    {

        printf("\n====== MENU ======");
        printf("\n====== SIGNOS ======\n");
        printf("[1] Zodíaco\n");
        printf("[2] Chinês\n");
        printf("[3] Egipicio\n");
        printf("[4] Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // avalia a opção escolhida pelo usuário
        switch (opcao)
        {
        case 1:
        	printf("\n====== SIGNOS ZODÌACOS ======\n");
        	printf("Digite o dia em que nasceu: ");
			scanf("%d", &dia); 
    		printf("Agora em que mes nasceu (EM NUMEROS!): ");
    		scanf("%d", &mes);
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
            break;
        case 2:
  			printf("Digite o dia em que nasceu: ");
			scanf("%d", &dia); 
    		printf("Agora em que mes nasceu (EM NUMEROS!): ");
    		scanf("%d", &mes);
            break;
        case 3:
        	printf("\n====== SIGNOS EGIPICIOS ======\n");
  			printf("Digite o dia em que nasceu: ");
			scanf("%d", &dia); 
    		printf("Agora em que mes nasceu (EM NUMEROS!): ");
    		scanf("%d", &mes);
    		if ((mes == 3 && dia >= 16) || (mes == 4 && dia <= 15))
		    {
		        printf("Seu signo e Sekhmet.\n");
		    }
		    else if ((mes == 4 && dia >= 16) || (mes == 5 && dia <= 15))
		    {
		        printf("Seu signo e Ptah.\n");
		    }
		    else if ((mes == 5 && dia >= 16) || (mes == 6 && dia <= 15))
		    {
		        printf("Seu signo e Toth.\n");
		    }
		    else if ((mes == 6 && dia >= 16) || (mes == 7 && dia <= 15))
		    {
		        printf("Seu signo e Ísis.\n");
		    }
		    else if ((mes == 7 && dia >= 16) || (mes == 8 && dia <= 15))
		    {
		        printf("Seu signo e Rá.\n");
		    }
		    else if ((mes == 8 && dia >= 16) || (mes == 9 && dia <= 15))
		    {
		        printf("Seu signo e Neit.\n");
		    }
		    else if ((mes == 9 && dia >= 16) || (mes == 10 && dia <= 15))
		    {
		        printf("Seu signo e Maat.\n");
		    }
		    else if ((mes == 10 && dia >= 16) || (mes == 11 && dia <= 15))
		    {
		        printf("Seu signo e Osíris.\n");
		    }
		    else if ((mes == 11 && dia >= 16) || (mes == 12 && dia <= 15))
		    {
		        printf("Seu signo e Hátor.\n");
		    }
		    else if ((mes == 12 && dia >= 16) || (mes == 1 && dia <= 15))
		    {
		        printf("Seu signo e Anúbis.\n");
		    }
		    else if ((mes == 1 && dia >= 16) || (mes == 2 && dia <= 15))
		    {
		        printf("Seu signo e Bastet.\n");
		    }
		    else if ((mes == 2 && dia >= 16) || (mes == 3 && dia <= 15))
		    {
		        printf("Seu signo e Tauret.\n");
		    }
		    else
		    {
		        printf("Data de nascimento invalida.\n");
		    }
            break;
        case 4:
            printf("Saindo...\n");
            break;
        default: //
            printf("Opcao invalida! Tente denovo.\n");
        }
    } while (opcao != 4); // continua exibindo o menu até sair

    return 0;
}