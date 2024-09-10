#include <stdio.h>

int main()
{

    int count, count2;
    count = 1;

    do //* garante que a condição seja atendida pelo menos uma vez
    {
        printf("%d - looping do...while \n", count);
        count++;
    } while (count <= 10);

    do
    {
        printf("digite um valor: ");
        scanf("%d", &count2);
    } while (count2 > 0);

    return 0;
}