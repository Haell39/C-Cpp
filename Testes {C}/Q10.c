#include <stdio.h>
int main()
{
    int a = 5, b = 10, c = 15;
    if ((a < b) && (b < c))
    {
        printf("Todas as condições são verdadeiras.\n");
    }
    if ((a > b) || (b < c))
    {
        printf("Pelo menos uma das condições é verdadeira.\n");
    }
    return 0;
}