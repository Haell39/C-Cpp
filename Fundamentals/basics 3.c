#include <stdio.h>
int main()
{

    printf("basics of C:\n");

    int n1, n2, sum, div, mult, sub, rest;

    printf("Choose first number: ");
    scanf("%d", &n1);

    printf("Choose second number: ");
    scanf("%d", &n2);

    rest = n1 % n2;

    printf("Resto: %d %% %d = %d\n", n1, n2, rest);


   
    return 0;
}