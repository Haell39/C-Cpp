#include <stdio.h>
#include <stdlib.h>

void ola() // função sem parâmetro e sem retorno
{
    printf("\nOla Mundo Ja");
}

void ola2() //funçao sem parâmetro e sem retorno
{
    printf("Ola Mathmatica\n");
}

void square(int a) //funçao com parâmetro e sem retorno
{
    printf("%d\n", a * a);
}

void wellcome(char name[30]) //funçao com parâmetro e sem retorno
{
    printf("Bien venido! %s\n", name);
}

int main()
{

    char name[30];
    printf("Enter your name: ");
    scanf("%s", name);
    wellcome(name);

    square(4);

    int x;
    for (x = 1; x < 5; x++)
    {
        ola2();
    }

    ola();
    ola();

    return 0;
}
