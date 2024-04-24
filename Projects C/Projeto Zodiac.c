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
		printf("\n====== SIGNOS ======\n");
		printf("[1] Zod�aco\n");
		printf("[2] Egipicio\n");
		printf("[3] Chin�s\n");
		printf("[4] Sair\n");
		printf("Escolha uma opcao: ");
		scanf("%d", &opcao);

		// avalia a op??o escolhida pelo usu?rio
		switch (opcao)
		{
		case 1:
			printf("\n====== SIGNOS ZOD�ACOS ======\n");
			printf("Digite o dia em que nasceu: ");
			scanf("%d", &dia);
			printf("Agora em que mes nasceu (EM N�MEROS!): ");
			scanf("%d", &mes);
			if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19))
			{
				printf("Seu signo e �ries.\n");
			}
			else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20))
			{
				printf("Seu signo e Touro.\n");
			}
			else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20))
			{
				printf("Seu signo e G�meos.\n");
			}
			else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22))
			{
				printf("Seu signo e C�ncer.\n");
			}
			else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22))
			{
				printf("Seu signo e Le�o.\n");
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
				printf("Seu signo e Escorpi�o.\n");
			}
			else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21))
			{
				printf("Seu signo e Sagit�rio.\n");
			}
			else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19))
			{
				printf("Seu signo e Capric�rnio.\n");
			}
			else if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18))
			{
				printf("Seu signo e Aqu�rio.\n");
			}
			else if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20))
			{
				printf("Seu signo e Peixes.\n");
			}
			else
			{
				printf("Data de nascimento inv�lida.\n");
			}
			break;

		case 2:
			printf("\n====== SIGNOS EGIPICIOS ======\n");
			printf("Digite o dia em que nasceu: ");
			scanf("%d", &dia);
			printf("Agora em que mes nasceu (EM N�MEROS!): ");
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
				printf("Seu signo e �sis.\n");
			}
			else if ((mes == 7 && dia >= 16) || (mes == 8 && dia <= 15))
			{
				printf("Seu signo e R�\n");
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
				printf("Seu signo e Os�ris.\n");
			}
			else if ((mes == 11 && dia >= 16) || (mes == 12 && dia <= 15))
			{
				printf("Seu signo e H�tor.\n");
			}
			else if ((mes == 12 && dia >= 16) || (mes == 1 && dia <= 15))
			{
				printf("Seu signo e An�bis.\n");
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
				printf("Data de nascimento inv�lida.\n");
			}
			break;
		case 3:
			printf("\n====== ZODIACO CHINÊS ALEATÓRIO ======\n");
			printf("Digite um ano entre 1990 a 2001: ");
			scanf("%d", &ano);

			if ((ano == 1990))
			{
				printf("Seu zodiaco chines � apapapapya");
			}
			else if ((ano == 1991))
			{
				printf("Seu zodiaco chines � b�falo");
			}
			else if ((ano == 1992))
			{
				printf("Seu zodiaco chines � tigre");
			}
			else if ((ano == 1993))
			{
				printf("Seu zodiaco chines � coelho");
			}
			else if ((ano == 1994))
			{
				printf("Seu zodiaco chines � drag�o");
			}
			else if ((ano == 1995))
			{
				printf("Seu zodiaco chines � serpente");
			}
			else if ((ano == 1996))
			{
				printf("Seu zodiaco chines � cavalo");
			}
			else if ((ano == 1997))
			{
				printf("Seu zodiaco chines � cabra");
			}
			else if ((ano == 1998))
			{
				printf("Seu zodiaco chines � macaco");
			}
			else if ((ano == 1999))
			{
				printf("Seu zodiaco chines � galo");
			}
			else if ((ano == 2000))
			{
				printf("Seu zodiaco chines � cachorro");
			}
			else if ((ano == 2001))
			{
				printf("Seu zodiaco chines � porco");
			}
			else
			{
				printf("Ano inv�lido.\n");
			}
			break;

		case 4:
			printf("Saindo...\n");
			break;
		default: //
			printf("Opcao invalida! Tente denovo.\n");
		}
	} while (opcao != 4); // continua exibindo o menu at? sair

	return 0;
}
