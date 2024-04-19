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

    return 0;
}
