

#include <stdio.h>
int main()
{

    //* data types

    int x = 5;
    int y = 2;
    int sum = x / y;

    printf("\n%d", sum); // Outputs 2

    //* The result is float so you need to convert it

    int num1 = 5;
    int num2 = 2;
    float sum2 = (float)num1 / num2;

    printf("\n%0.1f", sum2); // 2.5

    //! Real life example:

    // Set the maximum possible score in the game to 500
    int maxScore = 500;

    // The actual score of the user
    int userScore = 420;

    /* Calculate the percantage of the user's score in relation to the maximum available score.
    Convert userScore to float to make sure that the division is accurate */
    float percentage = (float)userScore / maxScore * 100.0;

    // Print the percentage
    printf("\nUser's percentage is %.2f", percentage);
}
