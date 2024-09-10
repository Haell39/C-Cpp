#include <stdio.h>

int sum(int a, int b) // Função com retorno(Inteiro)
{
    int s = a + b;
    return s;
}

int mult(int a, int b) // Função com retorno(Inteiro)
{
    int s = a * b;
    return s;
}

float media(float a, float b) // Função com retorno(Float)
{
    return (a + b) / 2;
}

int main()
{

    int a, b; //*eu poderia nomear a e b como quiser(x e y por exemplo), passar &x e &y, dps chammar sum(x,y) que o x cairia em a e o y cairia em b e tudo funcionaria normalmente!
    printf("Enter two numbers: \n");
    scanf("%d %d", &a,&b);
    printf("Sum = %i", sum(a,b));

    int x, y;
    printf("\nEnter two numbers: \n");
    scanf("%d %d", &x, &y);
    printf("Product = %d", mult(x, y)); //*x e y vao cair em a e b na função mult!


    float n1, n2; //pedindo as notas
    printf("\nEnter your two notes: \n");
    scanf("%f %f", &n1, &n2);
    printf("Average = %.2f", media(n1, n2));

    float m = media(n1, n2); //Criando uma variável para armazenar a média e falar com o user
    if (m >= 7.0)
    {
        printf("\nYou have passed the class!\n");
    }
    else
    {
        printf("\nYou re Focked up!\n");
    }

    return 0;
}
