#include <stdio.h>
int main()
{

    int i, j;
    //* Logic operator "AND"
    for (i = 1, j = 10; i <= 5 && j >= 6; i++, j--)
    {
        printf("%d %d\n", i, j);
    }
    //* Logic operator "OR"
    for (i = 1, j = 10; i <= 5 || j >= 6; i++, j--)
    {
        printf("%d %d\n", i, j);
    }
    //* Logic operator "NOT"

    //? Real Example:

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
    else
    {
        printf("REPROVADO\n");
    }

    return 0;
}