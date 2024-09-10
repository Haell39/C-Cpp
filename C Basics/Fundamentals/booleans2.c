#include <stdio.h>
#include <stdbool.h>

int main()
{

    printf("Real life examples of booleans");

    // Set the maximum possible score in the game to 500
    int maxScore = 500;

    // The actual score of the user
    int userScore = 420;

    // Check if userScore is less than maxScore
    bool isUserScoreLessThanMaxScore = (userScore < maxScore);
    printf("\n%d", isUserScoreLessThanMaxScore);

    //* Example 2

    //we need to find out if a person is old enough to vote.

    int age;
    printf("\nEnter your age: ");
    scanf("\n%d", &age); // & para passar o endereço de memória
    int canVote = 18;

    if (age >= canVote)
    {
        printf("\nYes, you can vote");
    }
    else
    {
        printf("\nNo, you can't vote");
    }
    






    return 0;
}