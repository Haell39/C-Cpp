#include <stdio.h>

int main()
{
    printf("Examples of Loops in C\n\n");

    // Example of while loop
    printf("## While Loop\n");
    int i = 1;
    while (i <= 5)
    {
        printf("Iteration %d\n", i);
        i++;
    }
    printf("End of while loop\n\n");

    // Example of do-while loop
    printf("## Do-While Loop\n");
    int j = 1;
    do
    {
        printf("Iteration %d\n", j);
        j++;
    } while (j <= 5);
    printf("End of do-while loop\n\n");

    // Example of for loop
    printf("## For Loop\n");
    for (int k = 1; k <= 5; k++)
    {
        printf("Iteration %d\n", k);
    }
    printf("End of for loop\n\n");

    // Example of nested loops
    printf("## Nested Loops\n");
    for (int l = 1; l <= 3; l++)
    {
        printf("Outer iteration %d:\n", l);
        for (int m = 1; m <= 3; m++)
        {
            printf("  Inner iteration %d\n", m);
        }
    }
    printf("End of nested loops\n\n");

    // Example of break statement
    printf("## Break Statement\n");
    for (int n = 1; n <= 5; n++)
    {
        if (n == 3)
        {
            printf("Found 3, exiting loop...\n");
            break;
        }
        printf("Iteration %d\n", n);
    }
    printf("End of loop with break\n\n");

    // Example of continue statement
    printf("## Continue Statement\n");
    for (int o = 1; o <= 5; o++)
    {
        if (o == 3)
        {
            printf("Found 3, skipping iteration...\n");
            continue;
        }
        printf("Iteration %d\n", o);
    }
    printf("End of loop with continue\n");

    return 0;
}
