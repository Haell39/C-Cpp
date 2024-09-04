#include <stdio.h>

int main()
{
    // Laço for
    printf("Laço for:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Iteração %d\n", i);
    }

    // Laço while
    printf("\nLaço while:\n");
    int i = 0;
    while (i < 5)
    {
        printf("Iteração %d\n", i);
        i++;
    }

    // Laço do-while
    printf("\nLaço do-while:\n");
    i = 0;
    do
    {
        printf("Iteração %d\n", i);
        i++;
    } while (i < 5);

    return 0;
}
