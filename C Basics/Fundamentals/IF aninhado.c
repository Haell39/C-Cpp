#include <stdio.h>
#include <stdlib.h>
int main()
{

    float nota1, nota2, nota3, media;

    //* IF ANINHADO:

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    media = (nota1 + nota2 + nota3) / 3;
    printf("Sua media foi: %.2f\n", media);

    if (media >= 7)
    {
        printf("APROVADO\n");
    }
    else if (media >= 5)
    {
        printf("RECUPERACAO\n");
    }
    else
    {
        printf("REPROVADO\n");
    }

    //? Outro jeito de fazer o IF ANINHADO:

    float nota4, nota5, nota6, media2;

    printf("Digite a primeira nota 4: ");
    scanf("%f", &nota4);
    printf("Digite a segunda nota 5: ");
    scanf("%f", &nota5);
    printf("Digite a terceira nota 6: ");
    scanf("%f", &nota6);
    media2 = (nota4 + nota5 + nota6) / 3;
    printf("Sua media foi: %.2f\n", media2);

    if (media2 >= 7)
    {
        printf("APROVADO\n");
    }
    else
    {
        if (media2 >= 5)
        {
            printf("RECUPERACAO\n");
        }
        else
        {
            printf("REPROVADO\n");
        }
    }

    /*
        int i = 0;
        if (i == 0)
        {
            printf("i = %d\n", i);
            if (i == 1)
            {
                printf("i = %d\n", i);
            }
        }

    */

    return 0;
}