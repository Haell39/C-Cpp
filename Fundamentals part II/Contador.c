#include <stdio.h>

int main()
{

    int count, count2;
    count = 0;
    while (count < 20 && count2 < 20)
    {
        printf("%d ", count);
        count = count + 2; // isso é mesmo que count += 2

    }

    //* tambem é possivel usar os contadores das seguintes formas:
    /*

    //* count -= 2; count = count - 2;

    //* ou qualquer outro numero que quiser tando pra acrescentar ou pra decrementar

    //* O count tbm pode ser o i de um for:

    */

    for (int i = 0; i < 20; i += 2)
    {
        printf("%dA ", i);
    }

    //* agora vamos decrementar por 3:

    for (int i = 20; i > -3; i -= 3)
    {
        printf("%dB ", i);
    }

        

    return 0;
}