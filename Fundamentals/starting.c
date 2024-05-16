#include <stdio.h>
#include <math.h>

int main()
{
    printf("Hello, World!\n");
    int x = 7778;
    float y = 3.14;
    char letra = 'A';
    char frase[10] = "HOllow k";
    double z = x * y;

    printf("Values: %d, %.2f, %c, %s, %f\n", x, y, letra, frase, z); // write all variables in the same order as declared

    int value1, value2; // you can declare many variables of the same type in one line
    printf("Enter two integers: ");
    scanf("%d %d", &value1, &value2);
    printf("The sum of %d and %d is %d\n", value1, value2, value1 + value2);

    int v1, v2, sum, diff, product, div, number, rest;

    printf("Enter two integers: ");
    scanf("%d %d", &v1, &v2);
    sum = v1 + v2;
    diff = v1 - v2;
    product = v1 * v2;
    div = v1 / v2;
    printf("The sum of %d and %d is %d\n", v1, v2, sum);
    printf("The difference of %d and %d is %d\n", v1, v2, diff);
    printf("The product of %d and %d is %d\n", v1, v2, product);
    printf("The div of %d and %d is %d\n", v1, v2, div);

    printf("Enter one integer: ");
    scanf("%d", &number);
    rest = number % 2;
    if (rest == 0)
    {
        printf("%d is an even number.\n", number);
    }
    else
    {
        printf("%d is an odd number.\n", number);
    }

    return 0;
}
