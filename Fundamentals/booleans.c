#include <stdio.h>
#include <stdbool.h>

int main()
{

    printf("Booleans in C\n");

    //* A boolean variable is declared with the bool keyword and can only take the values true or false:

    //* boolean values are returned as integers, 0 for false and 1(or any other value) for true.

    // Create boolean variables
    bool isProgrammingFun = true;
    bool Javagood = false;

    // Return boolean values
    printf("%d", isProgrammingFun); // Returns 1 (true)
    printf("\n%d", Javagood);       // Returns 0 (false)

    //* Comparing Values and Variables

    // Create variables
    int x = 5;
    int y = 10;
    int z = 5;

    // Compare values
    bool isEqual = (x == z);          // true
    bool isNotEqual = (x != y);       // true
    bool isGreater = (x > y);         // false
    bool isLess = (x < y);            // true
    bool isGreaterOrEqual = (x >= z); // true
    bool isLessOrEqual = (x <= z);    // true

    // Compare variables
    bool isEqual2 = (x == z);          // true
    bool isNotEqual2 = (x != y);       // true
    bool isGreater2 = (x > y);         // false
    bool isLess2 = (x < y);            // true
    bool isGreaterOrEqual2 = (x >= z); // true
    bool isLessOrEqual2 = (x <= z);    // true

    // comparing values
    printf("\n%d", 10 > 9); // Returns 1 (true) because 10 is greater than 9

    // comparing variables
    printf("\n%d", x > y); // Returns 0 (false) because x is not greater than y


    // using (==)
    printf("\n%d", 10 == 9); // Returns 0 (false) because 10 is not equal to 9

    //* Its also possible to compare boolean values and special structures like arrays, pointers, etc...

    bool isHamburgerTasty = true;
    bool isPizzaTasty = true;

    // Find out if both hamburger and pizza is tasty
    printf("\n%d", isHamburgerTasty == isPizzaTasty);




    return 0;
}
