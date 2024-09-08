#include <stdio.h>
#include <stdbool.h>

bool greater(int x, int y) //função booleana como parametro e retorno
{
    if (x > y)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%i", &a);
    printf("Enter the second number: ");
    scanf("%i", &b);

    if (greater(a, b))
    {
        printf("%d is greater than %d", a, b);
    }
    else
    {
        printf("%i is greater than %i", b, a);
    }
}