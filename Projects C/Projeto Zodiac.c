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
		printf("[1] ZodÍaco\n");
		printf("[2] Egipicio\n");
		printf("[3] Chinês\n");
		printf("[4] Sair\n");
		printf("Escolha uma opcao: ");
		scanf("%d", &opcao);

		// avalia a op??o escolhida pelo usu?rio
		switch (opcao)
		{
		case 1:
			printf("\n====== SIGNOS ZODÍACOS ======\n");
			printf("Digite o dia em que nasceu: ");
			scanf("%d", &dia);
			printf("Agora em que mes nasceu (EM NÚMEROS!): ");
			scanf("%d", &mes);
			if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19))
			{
				printf("Seu signo e Áries.\n");
			}
			else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20))
			{
				printf("Seu signo e Touro.\n");
			}
			else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20))
			{
				printf("Seu signo e Gêmeos.\n");
			}
			else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22))
			{
				printf("Seu signo e Câncer.\n");
			}
			else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22))
			{
				printf("Seu signo e Leão.\n");
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
				printf("Seu signo e Escorpião.\n");
			}
			else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21))
			{
				printf("Seu signo e Sagitário.\n");
			}
			else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19))
			{
				printf("Seu signo e Capricórnio.\n");
			}
			else if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18))
			{
				printf("Seu signo e Aquário.\n");
			}
			else if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20))
			{
				printf("Seu signo e Peixes.\n");
			}
			else
			{
				printf("Data de nascimento inválida.\n");
			}
			break;

		case 2:
			printf("\n====== SIGNOS EGIPICIOS ======\n");
			printf("Digite o dia em que nasceu: ");
			scanf("%d", &dia);
			printf("Agora em que mes nasceu (EM NÚMEROS!): ");
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
				printf("Seu signo e Rá\n");
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
				printf("Data de nascimento inválida.\n");
			}
			break;
		case 3:
			printf("\n====== ZODÍACO CHINÊS ======\n");
			printf("Digite o ano em que voçê nasceu: ");
			scanf("%d", &ano);

			if ((ano == 1936 || 1948 || 1960 || 1972 || 1984 || 1996 || 2008 || 2020))
			{
				printf("Seu zodiaco chines é apapapapya");
			}
			else if ((ano == 1937 || 1949 || 1961 || 1973 || 1985 || 1997 || 2009 || 2021))
			{
				printf("Seu zodiaco chines é búfalo");
			}
			else if ((ano == 1938, 1950, 1962, 1974, 1986, 1998, 2010, 2022))
			{
				printf("Seu zodiaco chines é tigre");
			}
			else if ((ano == 1939, 1951, 1963, 1975, 1987, 1999, 2011, 2023))
			{
				printf("Seu zodiaco chines é coelho");
			}
			else if ((ano == 1940, 1952, 1964, 1976, 1988, 2000, 2012))
			{
				printf("Seu zodiaco chines é dragão");
			}
			else if ((ano == 1941, 1953, 1965, 1977, 1989, 2001, 2013))
			{
				printf("Seu zodiaco chines é serpente");
			}
			else if ((ano == 1942, 1954, 1966, 1978, 1990, 2002, 2014))
			{
				printf("Seu zodiaco chines é cavalo");
			}
			else if ((ano == 1943, 1955, 1967, 1979, 1991, 2003, 2015))
			{
				printf("Seu zodiaco chines é cabra");
			}
			else if ((ano == 1944, 1956, 1968, 1980, 1992, 2004, 2016))
			{
				printf("Seu zodiaco chines é macaco");
			}
			else if ((ano == 1945, 1957, 1969, 1981, 1993, 2005, 2017))
			{
				printf("Seu zodiaco chines é galo");
			}
			else if ((ano == 1946, 1958, 1970, 1982, 1994, 2006, 2018))
			{
				printf("Seu zodiaco chines é cachorro");
			}
			else if ((ano == 1947, 1959, 1971, 1983, 1995, 2007, 2019))
			{
				printf("Seu zodiaco chines é porco");
			}
			else
			{
				printf("Ano inválido.\n");
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
