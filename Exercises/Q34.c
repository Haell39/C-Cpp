#include <stdio.h>

int main()
{

    //* Vamos ler certos valores um de cada vez, e contar quantos deles estão em determinado intervalo e quantos estão fora deste intervalo.

    int num = 10, cont = 0, cont2 = 0;
    printf("Type a number: ");
    for (int i = 0; i < num; i++)
    {
        int num2;
        printf("Type a number: ");
        scanf("%d", &num2);
        if (num2 >= 10 && num2 <= 50)
        {
            cont++;
        }
        else
        {
            cont2++;
        }
    }
    printf("Numbers between 10 and 50: %d\n", cont);
    printf("Numbers outside of 10 and 50: %d\n", cont2);






    return 0;
}