#include <stdio.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "Portuguese");

	int opcao, dia, mes, ano;

	// Menu
	do
	{

		printf("\n====== MENU ======");
		printf("\n====== ESCOLHA O CALENDARIO ZODIACO ======\n");
		printf("[1] Tradicional\n");
		printf("[2] Egipicio\n");
		printf("[3] Chines\n");
		printf("[4] Sair\n");
		printf("Escolha uma opcao: ");
		scanf("%d", &opcao);

		// avalia a opcao escolhida pelo usuario
		switch (opcao)
		{
		case 1:
			printf("\n====== ZODIACO TRADICIONAL ======\n");
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
				printf("Data de nascimento inv?lida.\n");
			}
			break;

		case 2:
			printf("\n====== ZODIACO EGIPICIO ======\n");
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
				printf("Seu signo e Isis.\n");
			}
			else if ((mes == 7 && dia >= 16) || (mes == 8 && dia <= 15))
			{
				printf("Seu signo e Ra\n");
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
				printf("Seu signo e Osiris.\n");
			}
			else if ((mes == 11 && dia >= 16) || (mes == 12 && dia <= 15))
			{
				printf("Seu signo e Hator.\n");
			}
			else if ((mes == 12 && dia >= 16) || (mes == 1 && dia <= 15))
			{
				printf("Seu signo e An?bis.\n");
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
				printf("Data de nascimento inv?lida.\n");
			}
			break;
		case 3:
			printf("\n====== ZODIACO CHINES ======\n");
			printf("Digite um ano entre 1996 a 2007: ");
			scanf("%d", &ano);

			if ((ano == 1996))
			{
				printf("Seu zodiaco chines eh Rato");
			}
			else if ((ano == 1997))
			{
				printf("Seu zodiaco chines eh bufalo");
			}
			else if ((ano == 1998))
			{
				printf("Seu zodiaco chines eh tigre");
			}
			else if ((ano == 1999))
			{
				printf("Seu zodiaco chines eh coelho");
			}
			else if ((ano == 2000))
			{
				printf("Seu zodiaco chines eh dragao");
			}
			else if ((ano == 2001))
			{
				printf("Seu zodiaco chines eh serpente");
			}
			else if ((ano == 2002))
			{
				printf("Seu zodiaco chines eh cavalo");
			}
			else if ((ano == 2003))
			{
				printf("Seu zodiaco chines eh cabra");
			}
			else if ((ano == 2004))
			{
				printf("Seu zodiaco chines eh macaco");
			}
			else if ((ano == 2005))
			{
				printf("Seu zodiaco chines eh galo");
			}
			else if ((ano == 2006))
			{
				printf("Seu zodiaco chines eh cachorro");
			}
			else if ((ano == 2007))
			{
				printf("Seu zodiaco chines eh porco");
			}
			else
			{
				printf("Ano invalido.\n");
			}
			break;

		case 4:
			printf("Muito Obrigado, Volte sempre!\n");
			printf("E que o Cosmos esteja com voce!");
			break;
		default: // caso opcao seja invalida
			printf("Opcao invalida! Tente denovo.\n");
		}
	} while (opcao != 4); // continua exibindo o menu ate sair

	return 0;
}
