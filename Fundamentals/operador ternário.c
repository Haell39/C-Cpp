#include <stdio.h>
#include <stdlib.h>
int main()
{

    printf("Operador Ternário\n");
    printf("choose a number: ");
    int number;
    scanf("%d", &number);

    //* Fist check and do condition before ":" if false then check and do after ":".

    number > 0 ? printf("The number is positive\n") : printf("The number is negative\n");

    // Exemple 2:

    int number2;
    printf("Enter a number: ");
    scanf("%d", &number2);
    number2 % 2 == 0 ? printf("The number is even\n") : number2 %  2 != 0 ? printf("The number is odd\n") : printf("The number is zero\n");

    // Exemple 3:

    int number3;
    printf("Enter a number: ");
    scanf("%d", &number3);
    number3 > 23 ? printf("Your re older than me\n") : printf("Your re yonger than me\n");


    return 0;
}