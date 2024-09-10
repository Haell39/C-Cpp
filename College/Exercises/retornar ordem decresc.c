#include <stdio.h>

int main()
{
    printf("Digite 3 numeros inteiros separados por um espaco ou por enter: \n");
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Agora o sistema ira ordenar os valores em ordem decrescente.\n");


    if (num1 > num2 && num1 > num3)
    {
        if (num2 > num3)
        {
            printf("%d %d %d", num1, num2, num3);
        }
        else
        {
            printf("%d %d %d", num1, num3, num2);
        }
    }
    else if (num2 > num1 && num2 > num3)
    {
        if (num1 > num3)
        {
            printf("%d %d %d", num2, num1, num3);
        }
        else
        {
            printf("%d %d %d", num2, num3, num1);
        }
    }
    else if (num3 > num1 && num3 > num2)
    {
        if (num1 > num2)
        {
            printf("%d %d %d", num3, num1, num2);
        }
        else
        {
            printf("%d %d %d", num3, num2, num1);
        }
    }

    return 0;
}
