#include <stdio.h>

int main()
{

    //*  Declaring and Initializing the vector v1

    float v1[4] = {7.1, 8.4, 9.5, 5.2};

    printf("Exibindo os valores do vetor \n");
    printf("v1[0] = %0.2f\n", v1[0]);
    printf("v1[1] = %0.2f\n", v1[1]);
    printf("v1[2] = %0.2f\n", v1[2]);
    printf("v1[3] = %0.2f\n\n", v1[3]);

    //* Usando as estruturas de repetição

    int i;
    for (i = 0; i < 4; i++) //? Ou tbm pode usar i = 3;
    {
        printf("v1[%d] = %0.2f\n", i, v1[i]);
    }

    return 0;
}