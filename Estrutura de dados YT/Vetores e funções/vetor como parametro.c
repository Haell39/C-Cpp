#include <stdio.h>
#include <stdlib.h>

void showvector(int v[5])
{
    printf("You ve typed: ");
    for (int i=0; i<5;i++)
    {
        printf("%d", v[i]);
        if (i < 4) printf(", "); //* se i < 4, imprime vírgula e espaço, pois i é o indice do elemento e o ultimo elemento nao precisa de virgula e espaco!!
    }
    printf("\n");
}

int main()
{
    int i, vect[5];
    for (i=0; i<5;i++)
    {
        printf("Type a number: ");
        scanf("%d", &vect[i]);
    }

    showvector(vect);

    return 0;
}
