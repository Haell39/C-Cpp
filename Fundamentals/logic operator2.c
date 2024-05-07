#include <stdio.h>

/*
int main()
{


        //* Media e frequencia aluno (COM ERRO):


        int frequencia;
        float nota1, nota2, media;

        printf("Digite as 2 notas do aluno: \n");
        scanf("%f %f", &nota1, &nota2);

        printf("Digite a frequncia do aluno: ");
        scanf("%d", &frequencia);

        media = (nota1 + nota2) / 2;

        if (media >= 7 && frequencia >= 75)
        {
            printf("APROVADO com media: \n");
            printf("%.2f\n", media);
        }
        else if (media < 4 || frequencia < 50)
        {
            printf("Recuperacao\n");
        }
            else
            {
                printf("REPROVADO\n");
            }


}
    */

int main()
{
    // Declaração de variáveis
    int frequencia;
    float nota1, nota2, media;

    // Solicitar as notas do aluno
    printf("Digite as 2 notas do aluno: \n");
    scanf("%f %f", &nota1, &nota2);

    // Solicitar a frequência do aluno
    printf("Digite a frequencia do aluno: ");
    scanf("%d", &frequencia);

    // Calcular a media
    media = (nota1 + nota2) / 2;

    // Verificar se o aluno está aprovado, em recuperação ou reprovado
    if (media >= 7 && frequencia >= 75)
    {
        printf("APROVADO com media: %.2f\n", media);
    }
    else if (media >= 4 && frequencia >= 50)
    {
        printf("RECUPERACAO com media: %.2f\n", media);
    }
    else
    {
        printf("REPROVADO\n");
    }

    return 0;
}
