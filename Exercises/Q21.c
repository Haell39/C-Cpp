#include <stdio.h>

int add(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}
int mult(int x, int y)
{
    return x * y;
}
int div(int x, int y)
{
    return x / y;
}

int main()
{

    int a, b, result;

    printf("Type two integer numbers: ");
    scanf("%d %d", &a, &b);
    printf("Result: \n");
    //*######
    printf("adicao(%d, %d) = %d\n", a, b, add(a, b));
    printf("subtracao(%d, %d) = %d\n", a, b, sub(a, b));
    printf("multiplicacao(%d, %d) = %d\n", a, b, mult(a, b));
    printf("divisao(%d, %d) = %d\n", a, b, div(a, b));
    



    return 0;
}