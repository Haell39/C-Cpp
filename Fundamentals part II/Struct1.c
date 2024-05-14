#include <stdio.h>
int main()
{
    //* definindo conteudo do struct
    struct fichaAluno
    {
        int matricula;
        float nota1;
        float nota2;
    };

    //* Criar variavel aluno que sera do tipo struct fichaAluno

    struct fichaAluno aluno, aluno2, al[10];

    printf("numero de matricula...: ");
    scanf("%d", &aluno.matricula);

    printf("Informe a Nota 1...: ");
    scanf("%f", &aluno.nota1);

    printf("Informe a nota 2...: ");
    scanf("%f", &aluno.nota2);

    printf("\n\n _____________________Lendo os dados sa struct___________________\n\n");

    printf("Matricula .............: %d\n", aluno.matricula);
    printf("Nota da prova 1 .............: %0.2f\n", aluno.nota1);
    printf("Nota da prova 2 .............: %0.2f\n", aluno.nota2);

    return 0;
}
