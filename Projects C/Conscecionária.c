#include <stdio.h>

void carroEstrutura();
FILE *eita;

int main()
{
	int opcao;
	printf("-----Boa Tarde-----\n");
	printf("\n[1]Carro\n");
	printf("\n[2]Moto\n");
	printf("\n[3]Caminhao\n");
	printf("\n Qual tipo de veiculo gostaria de registrar: ");
	scanf("%d", &opcao);
	switch (opcao)
	{
	case 1:
		carroEstrutura();
		break;
	case 2:
		break;
	case 3:
		break;
	}
	return 0;
}

void carroEstrutura()
{
	int i;
	struct carro
	{
		char marca[30];
		char modelo[30];
		int codigoDeVeiculo;
		int anoDeFabricacao;
	};
	struct carro carro1;
	for (i = 1; i < 11; i++)
	{
		printf("Marca do veiculo: ");
		scanf("%29s", carro1.marca); // Fix: removed & operator and limited input to 29 characters to prevent buffer overflow

		printf("Modelo do veiculo: ");
		scanf("%29s", carro1.modelo); // Fix: removed & operator and limited input to 29 characters to prevent buffer overflow

		printf("codigo do veiculo: ");
		scanf("%d", &carro1.codigoDeVeiculo);

		int opcaoCarro;
		printf("[1] proximo carro\n");
		printf("[2] gerar relatorio\n");
		scanf("%d", &opcaoCarro); // Fix: added scanf to read user input
		switch (opcaoCarro)
		{
		case 1:
			eita = fopen("eita.txt", "a");
			if (eita == NULL)
			{ // Fix: added error checking for file opening
				printf("Error opening file\n");
				return;
			}
			fprintf(eita, "marca do veiculo = %s modelo do veiculo = %s codigo do veiculo = %d\n", carro1.marca, carro1.modelo, carro1.codigoDeVeiculo);
			fclose(eita);
			break; // Do nothing, continue to next iteration
		case 2:
			i = 11; // Fix: set i to 11 to break the loop
			break;
		}
	}

	FILE *eita;
	eita = fopen("eita.txt", "w");
	if (eita == NULL)
	{ // Fix: added error checking for file opening
		printf("Error opening file\n");
		return;
	}
	fprintf(eita, "marca do veiculo = %s modelo do veiculo = %s codigo do veiculo = %d\n", carro1.marca, carro1.modelo, carro1.codigoDeVeiculo);
	fclose(eita);
	// printf("marca = %s modelo = %s codigo = %d\n", carro1.marca, carro1.modelo, carro1.codigoDeVeiculo);
}
