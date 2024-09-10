#include <stdio.h>
int main()
{

    printf("Odd or Even\n");
    // Declare variable
    int n;
    printf("Enter a number: ");

    // Alocate the variable int type in "n"
    scanf("%d", &n);

    // Condition to check if the number is odd or even
    if (n % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }

    //* If its only one if statement, you can use the short form without else statement:

    int numb1;

    printf("Enter a number: ");
    scanf("%d", &numb1);
    if (numb1 % 2 == 0)
    {
        printf("Even\n");
    }

    return 0;
}
